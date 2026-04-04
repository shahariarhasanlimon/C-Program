// Print Digits using Recursion
#include <stdio.h>
void print_digits(int n) {
    if (n < 10) {
        printf("%d ", n); // base case: print the last digit
        return;
    }   
    print_digits(n / 10); // recursive call with n divided by 10 to remove the last digit
    printf("%d ", n % 10); // print the last digit after the recursive call
}
int main() {
    int number = 12345;
    printf("The digits of the number %d are:\n", number);
    print_digits(number); // call the function to print digits  
    printf("\nDone!\n");
    return 0;
}
