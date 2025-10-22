#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
     int mode;
     int wins = 0 , losses = 0;
     char retry = 'y';
     printf("\n\nWELCOME TO THE GAME : GUESS RANDOM NUMBER !!\n");
     printf("There are 5 Modes -->\n ");
     printf("GEAR 1 || GEAR 2 || GEAR 3 || GEAR 4 || GEAR 5\n");
 
     if(retry == 'y')
     {
          while(retry == 'y')
          {
               printf("GEAR 1 -> 'EASY'   : Range(0-10)    || attempts(3)\n");
               printf("GEAR 2 -> 'MEDIUM' : Range(10-40)   || attempts(4)\n");
               printf("GEAR 3 -> 'HARD'   : Range(50-100)  || attempts(5)\n");
               printf("GEAR 4 -> 'EXPERT' : Range(100-200) || attempts(6)\n");
               printf("GEAR 5 -> 'MASTER' : Range(250-500) || attempts(7)\n");
           
               printf("Which one you would like to play ?\n");
               printf("You can enter 0 for a random mode..\n");
               printf("(enter the mode) GEAR : ");
               scanf("%d",&mode);
               printf("\n");
            
               if( mode<0 || mode>5)
               {
                    printf("****INVALID MODE SELECTED.****\n");
                    printf("** Please choose between GEAR 1 and GEAR 5.**\n\n");
                    continue;
               }
               else
               {
                    if (mode == 0) 
                   {
                         srand(time(NULL));
                         mode = (rand() % 5) + 1;
                         printf("You are now playing in GEAR %d!\n", mode);
                   }
                    if(mode == 1)
                    {
                         int num , attempt  , guess;
                         int upper = 10 ,lower = 0 ;
                         int attempts = 3;
                         srand(time(NULL));
                         num = ( rand() % (upper - lower + 1)) + lower ;
                         printf("\t\t**NOTE**"); 
                         printf("\nRange of random number : 0 to 10\n");
                         printf("You have a Total of 3 attempts..\n\n");
    
                         for( attempt=1; attempt<= attempts;attempt++)
                         {
                              printf("Your  attempt no %d --> ",attempt);
                              printf("Enter your guess : ");
                              scanf("%d",&guess);
                              if( guess > num) printf("TOO HIGH !!\n");
                              else if(guess < num) printf("TOO LOW !!\n");
                              else
                              {
                                   printf("YOU ARE CORRECT !!\n");
                                   break ;
                              }
                              printf("\n");
                         }

                         if(guess == num )
                         {
                              printf(" You have WON !!\n");
                              wins++;
                         }
                         else 
                         {
                              printf(" You have LOST !! \n ");
                              printf("The Random No is %d\n",num);
                              losses++;
                         }
                    }
             
                    if(mode == 2)
                    {
                         int num , attempt  , guess;
                         int upper = 40 ,lower = 10 ;
                         int attempts = 4;
                         srand(time(NULL));
                         num = ( rand() % (upper - lower + 1)) + lower ;
                         printf("\t\t**NOTE**"); 
                         printf("\nRange of random number : 10 to 40\n");
                         printf("You have a Total of 4 attempts..\n\n");
    
                         for( attempt=1; attempt<= attempts;attempt++)
                         {
                              printf("Your  attempt no %d --> ",attempt);
                              printf("Enter your guess : ");
                              scanf("%d",&guess);
                              if( guess > num) printf("TOO HIGH !!\n");
                              else if(guess < num) printf("TOO LOW !!\n");
                              else
                              {
                                   printf("YOU ARE CORRECT !!\n");
                                   break ;
                              }
                              printf("\n");
                         }

                         if(guess == num )
                         {
                              printf(" You have WON !!\n");
                              wins++;
                         }
                         else 
                         {
                              printf(" You have LOST !! \n ");
                              printf("The Random No is %d\n",num);
                              losses++;
                         }
                    }
    
                    if(mode == 3)
                    {
                         int num , attempt  , guess;
                         int upper = 100 ,lower = 50 ;
                         int attempts = 5;
                         srand(time(NULL));
                         num = ( rand() % (upper - lower + 1)) + lower ;
                         printf("\t\t**NOTE**"); 
                         printf("\nRange of random number : 50 to 100\n");
                         printf("You have a Total of 5 attempts..\n\n");
    
                             for( attempt=1; attempt<= attempts;attempt++)
                         {
                              printf("Your  attempt no %d --> ",attempt);
                              printf("Enter your guess : ");
                              scanf("%d",&guess);
                              if( guess > num) printf("TOO HIGH !!\n");
                              else if(guess < num) printf("TOO LOW !!\n");
                              else
                              {
                                   printf("YOU ARE CORRECT !!\n");
                                   break ;
                              }
                              printf("\n");
                         }

                         if(guess == num )
                         {
                              printf(" You have WON !!\n");
                              wins++;
                         }
                         else 
                         {
                              printf(" You have LOST !! \n ");
                              printf("The Random No is %d\n",num);
                              losses++;
                         }
                    }
    
                    if(mode == 4)
                    {
                         int num , attempt  , guess;
                         int upper = 200 ,lower = 100 ;
                         int attempts = 6;
                         srand(time(NULL));
                         num = ( rand() % (upper - lower + 1)) + lower ;
                         printf("\t\t**NOTE**"); 
                         printf("\nRange of random number : 100 to 200\n");
                         printf("You have a Total of 6 attempts..\n\n");
    
                             for( attempt=1; attempt<= attempts;attempt++)
                         {
                              printf("Your  attempt no %d --> ",attempt);
                              printf("Enter your guess : ");
                              scanf("%d",&guess);
                              if( guess > num) printf("TOO HIGH !!\n");
                              else if(guess < num) printf("TOO LOW !!\n");
                              else
                              {
                                   printf("YOU ARE CORRECT !!\n");
                                   break ;
                              }
                              printf("\n");
                         }

                         if(guess == num )
                         {
                              printf(" You have WON !!\n");
                              wins++;
                         }
                         else 
                         {
                              printf(" You have LOST !! \n ");
                              printf("The Random No is %d\n",num);
                              losses++;
                         }
                    }
    
                    if(mode == 5)
                    {
                         int num , attempt  , guess;
                         int upper = 500 ,lower = 250 ;
                         int attempts = 7;
                         srand(time(NULL));
                         num = ( rand() % (upper - lower + 1)) + lower ;
                         printf("\t\t**NOTE**"); 
                         printf("\nRange of random number : 250 to 500\n");
                         printf("You have a Total of 7 attempts..\n\n");
    
                             for( attempt=1; attempt<= attempts;attempt++)
                         {
                              printf("Your  attempt no %d --> ",attempt);
                              printf("Enter your guess : ");
                              scanf("%d",&guess);
                              if( guess > num) printf("TOO HIGH !!\n");
                              else if(guess < num) printf("TOO LOW !!\n");
                              else
                              {
                                   printf("YOU ARE CORRECT !!\n");
                                   break ;
                              }
                              printf("\n");
                         }

                         if(guess == num )
                         {
                              printf(" You have WON !!\n");
                              wins++;
                         }
                         else 
                         {
                              printf(" You have LOST !! \n ");
                              printf("The Random No is %d\n",num);
                              losses++;
                         }
                    }
               }
    
               printf("Would you like to play again?\n");
               printf("Press 'y' for Yes, 'n' for No: ");
               getchar(); // Consume leftover newline
               scanf("%c", &retry);

               // Validate input
               if (retry != 'y' && retry != 'n') 
               {
                    printf("Choose only from (y/n): ");
                    getchar(); // Consume leftover newline
                    scanf("%c", &retry);
               }
          }

          if (retry == 'n')
          {
               printf("You have exited the game successfully !!\n\n");
          }
          printf("FINAL SCORE--> WINS : %d & LOSSES : %d \n\n",wins,losses);
     }
     return 0 ;
} 