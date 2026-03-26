#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a%b==0)
    {
        printf("a is divisible by b\n");
    }
    else if (b%a==0)
    {
        printf("b is divisible by a\n");
    }
    else
    {
        printf("a is equal to b\n");
    }
    return 0;
}