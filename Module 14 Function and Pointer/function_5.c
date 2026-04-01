// Useful Built-in Functions
// floor - Rounds a floating-point number down to the nearest integer.
// ceil - Rounds a floating-point number up to the nearest integer.
// pow - Raises a number to the power of another number.
// sqrt - Calculates the square root of a number.
// abs - Returns the absolute value of an integer.
// fabs - Returns the absolute value of a floating-point number.
#include <stdio.h>
#include <math.h>
int main() {
    double num1, num2;
    
    printf("Enter a floating-point number: ");
    scanf("%lf", &num1);
    
    printf("Enter another floating-point number: ");
    scanf("%lf", &num2);
    
    printf("Floor of %.2lf is %.2lf\n", num1, floor(num1));
    printf("Ceil of %.2lf is %.2lf\n", num1, ceil(num1));
    printf("%.2lf raised to the power of %.2lf is %.2lf\n", num1, num2, pow(num1, num2));
    printf("Square root of %.2lf is %.2lf\n", num1, sqrt(num1));
    printf("Absolute value of %.2lf is %.2lf\n", num1, fabs(num1));
    
    return 0;
}