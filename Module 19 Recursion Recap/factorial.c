// Factorial
#include <stdio.h>
unsigned long long factorial(int n) {
    if (n < 0) {    
        return 0; // factorial is not defined for negative numbers
    }
    if (n == 0 || n == 1) {
        return 1; // base case: factorial of 0 or 1 is 1
    }   
    return n * factorial(n - 1); // recursive call with n decremented by 1
}
int main() {
    int number = 20; // you can change this value to test with different numbers
    unsigned long long result = factorial(number);
    if (result == 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("The factorial of %d is: %llu\n", number, result);
    }
    return 0;   
}

