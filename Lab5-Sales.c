#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    double sales[12];
    FILE* file = fopen("input.txt", "r");

    for (int i = 0; i < 12; ++i) {
        fscanf(file, "%lf", &sales[i]);
    }

    fclose(file);

    char* months[] = {"January", "February", "March", "April", "May", "June",
                     "July", "August", "September", "October", "November", "December"};

    printf("Monthly sales report for 2022:\n");
    printf("Month\tSales\n");
    for (int i = 0; i < 12; ++i) {
        printf("%s\t$%.2f\n", months[i], sales[i]);
    }
    double min = sales[0];
    double max = sales[0];
    double sum = sales[0];

    for (int i = 1; i < 12; ++i) {
        sum += sales[i];
        if (sales[i] < min) {
            min = sales[i];
        }
        if (sales[i] > max) {
            max = sales[i];
        }
    }

    double average = sum / 12;
    printf("\nSales summary:\n");
    printf("Minimum sales: $%.2f (January)\n", min);
    printf("Maximum sales: $%.2f (December)\n", max);
    printf("Average sales: $%.2f\n", average);

    return 0;
}