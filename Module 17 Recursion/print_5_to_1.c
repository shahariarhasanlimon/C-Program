// Print From 5 to 1 using Recursion
#include <stdio.h>
void print_numbers(int n) {
    if (n < 1) {
        return; // base case: stop recursion when n is less than 1
    }
    printf("%d ", n);   
    print_numbers(n - 1); // recursive call with n decremented by 1
}
int main() {    
    printf("Printing numbers from 5 to 1:\n");
    print_numbers(5); // start printing from 5
    printf("\nDone!\n");
    return 0;
}