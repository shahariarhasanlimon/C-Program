// No Return + Parameter
#include<stdio.h>
void sum(int a, int b)
{
    int s = a + b;
    printf("The sum of the two numbers is %d\n", s);
}
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    sum(a, b); // This will call the sum function with the values of a and b as arguments.
    return 0;
}
