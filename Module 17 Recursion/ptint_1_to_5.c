// Print From 1 to 5 Using Recursion
#include <stdio.h>
void print_numbers(int n) {
    if (n > 5) {
        return; // base case: stop recursion when n exceeds 5
    }
    printf("%d ", n);   
    print_numbers(n + 1); // recursive call with n incremented by 1
}
int main() {    
    printf("Printing numbers from 1 to 5:\n");
    print_numbers(1); // start printing from 1
    printf("\nDone!\n");
    return 0;
}