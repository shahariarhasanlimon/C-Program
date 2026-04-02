// call by value
#include <stdio.h>
void increment(int x) {
    x = x + 1; // This changes the local copy of x, not the original variable
}
int main() {
    int a = 5;
    printf("Value of a before increment: %d\n", a); // Output: 5
    increment(a); // Pass a by value, which means a copy of a is passed to the function
    printf("Value of a after increment: %d\n", a);  // Output: 5, because the original variable a is not modified by the increment function
    return 0;
}