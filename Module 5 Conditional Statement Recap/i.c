//Conditionals Recap
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("a is greater than b\n");
    }
    else if (a < b)
    {
        printf("a is less than b\n");
    }
    else
    {
        printf("a is equal to b\n");
    }
    return 0;
}