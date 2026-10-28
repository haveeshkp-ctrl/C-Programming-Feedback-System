#include <stdio.h>
int main() {
    FILE *fp;
    int i;
    char feedback[200];
    fp = fopen("feedback.txt", "w");
    fprintf(fp, "Feedback about C Programming :\n");
    printf("Enter 5 feedback points about C Programming:\n");
    for (i = 1; i <= 5; i++) {
        printf("Feedback %d: ", i);
        fgets(feedback, sizeof(feedback), stdin);
        fprintf(fp, "%d. %s", i, feedback);
    }
    fclose(fp);
    fp = fopen("feedback.txt", "a");
    fprintf(fp, "\nFeedback about C Programming Teacher:\n");
    printf("\nEnter 5 feedback points about your C Programming Teacher:\n");
    for (i = 1; i <= 5; i++) {
        printf("Feedback %d: ", i);
        fgets(feedback, sizeof(feedback), stdin);
        fprintf(fp, "%d. %s", i, feedback);
    }
    fclose(fp);
    fp = fopen("feedback.txt", "r");
    
    printf("\n--- C Programming Feedback Report ---\n\n");
    while (fgets(feedback, sizeof(feedback), fp) != NULL) {
        printf("%s", feedback);
    }
    fclose(fp);
    return 0;
}
