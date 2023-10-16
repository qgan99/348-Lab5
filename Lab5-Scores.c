int main() {
    int score;

    
        printf("Enter the NFL score (Enter 0 or 1 to STOP): ");
        scanf("%d", &score);

    if (score > 1) {
        

        printf("Possible combinations of scoring plays:\n");

        for (int tdCount = 0; tdCount <= score / 6; tdCount++) {
            for (int td2ptCount = 0; td2ptCount <= score / 8; td2ptCount++) {
                for (int fgCount = 0; fgCount <= score / 3; fgCount++) {
                    for (int td1ptCount = 0; td1ptCount <= score / 7; td1ptCount++) {
                        for (int safetyCount = 0; safetyCount <= score / 2; safetyCount++) {
                            int totalPoints = (tdCount * 6) + (td2ptCount * 8) + (fgCount * 3) + (td1ptCount * 7) + (safetyCount * 2);
                            if (totalPoints == score) {
                                printf("%d TD + 2pt, %d TD + 1 pt, %d TD, %d 3 pt FG, %d Safety\n", td2ptCount, td1ptCount,
                                       tdCount, fgCount, safetyCount);
                            }
                        }
                    }
                }
            }
        }
        
        printf("\n");
    }
    

    return 0;
}