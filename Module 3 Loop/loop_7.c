//While and Do-While Loop
#include <stdio.h>
int main()
{    int n, i = 1, sum = 0;
    scanf("%d", &n);
    while (i <= n)
    {        sum = sum + i;
        i++;
    }
    printf("The sum from 1 to %d is %d\n", n, sum);  
    //Do-while
    i = 1;
    sum = 0;
    do  {        sum = sum + i;
        i++;        
    } while (i <= n);
    printf("The sum from 1 to %d is %d\n", n, sum);
    
    return 0;
}