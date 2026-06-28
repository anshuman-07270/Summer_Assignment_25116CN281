#include <stdio.h>
#include <string.h>

int main() {
    char questions[5][100] = {
        "1. Which City is known as the pink city of India ?",
        "2. How many days are there in a leap year ?",
        "3. What is the square root of 49 ?",
        "4. Which is the largest ocean in the world?",
        "5. Which keyword is used to return a value from a function in C?"
    };

    char answers[5][30] = {
        "jaipur",
        "366",
        "7",
        "pacific",
        "return"
    };

    char myAnswer[50];
    int score = 0;

    printf("===== QUIZ APPLICATION =====\n");
    printf("NOTE: Your Answer must be in small letters\n");
    
    for (int i = 0; i < 5; i++) {
        printf("\n%s\n", questions[i]);
        printf("Your Answer: ");
        fgets(myAnswer, sizeof(myAnswer), stdin);

        myAnswer[strcspn(myAnswer, "\n")] = '\0';

        if (strcmp(myAnswer, answers[i]) == 0) {
            printf("Correct!\n");
            score=score+2;
        } else {
            printf("Wrong! Correct Answer: %s\n", answers[i]);
        }
    }

    printf("\n===== QUIZ RESULT =====\n");
    printf("Your Score: %d/10\n", score);

    if (score == 10)
        printf("Excellent!\n");
    else if (score >= 7)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}