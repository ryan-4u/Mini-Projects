//Let's generate a random number
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// random number is generated between 0 to RAND_MAX (=32767)for this platform
int main()
{
    int num1,num2,num3,num4;
    int upper3 = 100 ,lower3 = 50 ,upper4 = 1000 ,lower4 = 900 ;
    srand(time(NULL));
    num1 = rand() % 10 ; //no will be b/w 0 to 9 ...
    printf("%d\n",num1);
    num2 = rand() % 50 ; //no will be b/w 0 to 49 ...
    printf("%d\n",num2);
    num3 = ( rand() % (upper3 - lower3 + 1)) + lower3 ; // no is b/w 100 and 50
    printf("%d\n",num3);
    num4 = ( rand() % (upper4 - lower4 + 1)) + lower4 ; // no is b/w 900 and 1000
    printf("%d\n",num4);

    return 0;
}