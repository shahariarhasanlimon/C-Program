// No Return + No Parameter
#include<stdio.h>
void sum()
{    int a, b;
    printf("Enter two numbers: ");  
    scanf("%d %d", &a, &b);
    int s = a + b;
    printf("The sum of the two numbers is %d\n", s);
}
int main()
{   
    sum(); // This will call the sum function, which will read two integers from the user and print their sum.
    return 0;
}