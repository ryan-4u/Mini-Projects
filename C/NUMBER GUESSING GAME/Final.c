#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void playMode(int lower, int upper, int attempts, int *wins, int *losses);
int main() 
{
    int mode, wins = 0, losses = 0;
    char retry = 'y';
    srand(time(NULL)); 
    printf("\n\nWELCOME TO THE GAME : GUESS RANDOM NUMBER !!\n");

    while (retry == 'y') {
        printf("\nThere are 5 Modes -->\n");
        printf("GEAR 1 -> 'EASY'   : Range(0-10)    || attempts(3)\n");
        printf("GEAR 2 -> 'MEDIUM' : Range(10-40)   || attempts(4)\n");
        printf("GEAR 3 -> 'HARD'   : Range(50-100)  || attempts(5)\n");
        printf("GEAR 4 -> 'EXPERT' : Range(100-200) || attempts(6)\n");
        printf("GEAR 5 -> 'MASTER' : Range(250-500) || attempts(7)\n");
        printf("You can enter 0 for a random mode..\n");
        printf("(enter the mode) GEAR: ");
        scanf("%d", &mode);

        if (mode < 0 || mode > 5) {
            printf("Invalid mode. Please choose between GEAR 0 and GEAR 5.\n\n");
            continue;
        }
        if (mode == 0) {
            mode = (rand() % 5) + 1;
            printf("You are now playing in GEAR %d!\n", mode);
        }

        if (mode == 1) playMode(0, 10, 3, &wins, &losses);
        if (mode == 2) playMode(10, 40, 4, &wins, &losses);
        if (mode == 3) playMode(50, 100, 5, &wins, &losses);
        if (mode == 4) playMode(100, 200, 6, &wins, &losses);
        if (mode == 5) playMode(250, 500, 7, &wins, &losses);

        do {
            printf("Would you like to play again? (y/n): ");
            getchar(); 
            scanf("%c", &retry);
        } while (retry != 'y' && retry != 'n');
    }

    printf("You have exited the game successfully !!\n");
    printf("FINAL SCORE --> WINS: %d, LOSSES: %d\n\n", wins, losses);
    return 0;
}
void playMode(int lower, int upper, int attempts, int *wins, int *losses) {
    int num, attempt, guess;
    num = (rand() % (upper - lower + 1)) + lower;

    printf("\t\t**NOTE**\n");
    printf("Range of random number: %d to %d\n", lower, upper);
    printf("You have a total of %d attempts.\n\n", attempts);

    for (attempt = 1; attempt <= attempts; attempt++) {
        printf("Your attempt no %d --> ", attempt);
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess > num) printf("Too high!....Aim lower!... You're overshooting!\n");
        else if (guess < num) printf("Too low!....Think bigger!...You're undershooting!\n");
        else {
            printf("YOU ARE CORRECT AND WON  !!\n");
            (*wins)++;
            return;
        }
        printf("\n");
    }

    printf("You have LOST !!\n");
    printf("The Random Number was %d\n\n", num);
    (*losses)++;
}