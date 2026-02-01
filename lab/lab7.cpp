#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int main() {
    srand(time(NULL));
    int want_play;
    bool Exit = true;
    do {
        printf("Do you want to play game (1=play,-1=exit) :\n");
        scanf("%d", &want_play);
        if (want_play == 1) {
            int min = 1;
            int max = 100;
            int score = 100;
            int number_guess;
            int random_number = rand() % 100 + 1;
            printf("\n(Score=100)\n\n");
            do {
                printf("Guess the winning number (%d-%d) :\n", min, max);
                scanf("%d", &number_guess);
                if (number_guess < random_number) {
                    score -= 10;
                    printf("Sorry, the winning number is HIGHER than %d. (Score=%d)\n\n", number_guess, score);
                    if (number_guess >= min) {
                        min = number_guess + 1;
                    }
                } else if (number_guess > random_number) {
                    score -= 10;
                    printf("Sorry, the winning number is LOWER than %d. (Score=%d)\n\n", number_guess, score);
                    if (number_guess <= max) {
                        max = number_guess - 1;
                    }
                } else {
                    printf("Score this game: %d\n\n", score);
                    printf("That is correct! The winning number is %d.\n\n", random_number);
                }
            } while (number_guess != random_number && score > 0);
            if (score <= 0 && number_guess != random_number) {
                printf("YOU NOOB : Number = %d\n\n", random_number);
            }
        } else if (want_play == -1) {
            printf("See you again.\n");
            Exit = false;
        } else {
            printf("Please enter only 1 or -1.\n");
            while (getchar() != '\n');
        }
    } while (Exit);
    return 0;
}