#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num , attempt  , guess;
    int upper = 200 ,lower = 100 ;
    int attempts = 6;
    srand(time(NULL));
    num = ( rand() % (upper - lower + 1)) + lower ;
    printf("\t\t**NOTE**"); 
    printf("\nRange of random number : 100 to 200\n");
    printf("You have a Total of 6 attempts..\n\n");
    
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