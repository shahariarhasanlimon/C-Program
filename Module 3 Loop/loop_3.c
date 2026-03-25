//Sum From 1 to N
#include<stdio.h>
int main()
{    int n, i, sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {        sum = sum + i;
    }
    printf("The sum from 1 to %d is %d\n", n, sum   );  
    return 0;
}