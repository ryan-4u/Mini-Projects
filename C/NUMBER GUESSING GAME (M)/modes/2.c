#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num , attempt  , guess;
    int upper = 40 ,lower = 10 ;
    int attempts = 4;
    srand(time(NULL));
    num = ( rand() % (upper - lower + 1)) + lower ;
    printf("\t\t**NOTE**"); 
    printf("\nRange of random number : 10 to 40\n");
    printf("You have a Total of 4 attempts..\n\n");
    
    for( attempt=1; attempt<= attempts;attempt++){
    printf("Your  attempt no %d :\n ",attempt);
    printf("Enter your guess : ");
    scanf("%d",&guess);
    if( guess > num) {
        printf("TOO HIGH !!\n");
    }
    else if(guess < num){
         printf("TOO LOW !!\n");
    }
    else{
         printf("YOU ARE CORRECT !!\n");
         break ;
    }
    printf("\n");
    }

    if(guess == num ){
         printf(" You have WON !!\n");
    }
    else {
        printf(" You have LOST !! \n ");
        printf("The Random No is %d\n",num);
    }
    return 0;
}