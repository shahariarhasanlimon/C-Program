//Return + No Parameter
#include<stdio.h>

int sum()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int s = a + b;
    return s;
}
int main()
{
    int s = sum(); // This will call the sum function, which will read two integers from the user and return their sum.
    printf("The sum of the two numbers is %d\n", s);
    return 0;
}