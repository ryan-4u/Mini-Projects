//Let's generate a random number
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
// random number is generated between 0 to RAND_MAX (=32767)for this platform
int main()
{
    srand(time(NULL));
    printf("%d\n",rand());
    printf("%d\n",rand());
    printf("%d\n",rand());
    printf("%d\n",rand());

    return 0;
}