//Increment Decrement Operator
#include <stdio.h>

int main() {
    int a = 5;
    printf("Initial value of a: %d\n", a);

    a++;  // Post-increment
    printf("After a++: %d\n", a);

    ++a;  // Pre-increment
    printf("After ++a: %d\n", a);

    a--;  // Post-decrement
    printf("After a--: %d\n", a);

    --a;  // Pre-decrement
    printf("After --a: %d\n", a);

    return 0;
}