//Return + Parameter

#include<stdio.h>

// return_type function_name(parameter_list)
// {
//     //function body
// }
int sum(int a, int b)
{
    int sum = a + b;
    return sum;
}
int main()
{
    printf("The sum of 10 and 20 is %d\n", sum(10, 20));
    printf("The sum of 100 and 200 is %d\n", sum(100, 200));
    return 0;
}