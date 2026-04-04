// Print From 5 to 1 in Reverse Way
#include <stdio.h>
void print_numbers_reverse(int n) {
    if (n < 1) {
        return; // base case: stop recursion when n is less than 1
    }
    print_numbers_reverse(n - 1); // recursive call with n decremented by 1
    printf("%d ", n); // print current number after the recursive call
}
int main() {    
    printf("Printing numbers from 5 to 1 in reverse way:\n");
    print_numbers_reverse(5); // start printing from 5
    printf("\nDone!\n");
    return 0;
}