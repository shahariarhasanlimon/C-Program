// Max Number
#include <stdio.h>
int max_number(int a, int b) {
    if (a > b) {
        return a; // return a if it is greater than b   
    } else {
        return b; // return b if it is greater than or equal to a
    }
}
int main() {
    int num1 = 10;  
    int num2 = 20;
    int max = max_number(num1, num2); // call the function to find the maximum number
    printf("The maximum of %d and %d is: %d\n", num1, num2, max); // print the result
    return 0;
}