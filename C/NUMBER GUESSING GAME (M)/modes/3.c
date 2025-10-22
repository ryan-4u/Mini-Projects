#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num , attempt  , guess;
    int upper = 100 ,lower = 50 ;
    int attempts = 5;
    srand(time(NULL));
    num = ( rand() % (upper - lower + 1)) + lower ;
    printf("\t\t**NOTE**"); 
    printf("\nRange of random number : 50 to 100\n");
    printf("You have a Total of 5 attempts..\n\n");
    
    for( attempt=1; attempt<= attempts;attempt++){
    printf("Your  attempt no %d --> ",attempt);
    printf("Enter your guess : ");
    scanf("%d",&guess);
    if( guess > num) {
        printf("  -->TOO HIGH !!\n");
    }
    else if(guess < num){
         printf("  -->TOO LOW !!\n");
    }
    else{
         printf("  -->YOU ARE CORRECT !!\n");
         break ;
    }
    }

    if(guess == num ){
         printf(" CONGRATULATIONS --> You have WON !!\n\n");
    }
    else {
        printf(" You have LOST !! and  ");
        printf("The Random No is %d\n\n",num);
    }
    return 0;
}