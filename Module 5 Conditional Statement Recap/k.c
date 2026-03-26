//Max and Min
#include<stdio.h>
int main()
{
    int a, b;   
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("The maximum number is: %d\n", a);
        printf("The minimum number is: %d\n", b);
    }
    else if (a < b)
    {
        printf("The maximum number is: %d\n", b);
        printf("The minimum number is: %d\n", a);
    }
    else
    {
        printf("Both numbers are equal\n");
    }
    return 0;
}