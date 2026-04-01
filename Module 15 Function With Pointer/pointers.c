// Pointers in C
#include <stdio.h>
int main() {
    int a = 10;
    int *ptr = &a; // ptr is a pointer to an integer, initialized to the address of a

    printf("Value of a: %d\n", a); // Output: 10
    printf("Address of a: %p\n", (void*)&a); // Output: Address of a
    printf("Value of ptr: %p\n", (void*)ptr); // Output: Address of a (same as above)
    printf("Value pointed to by ptr: %d\n", *ptr); // Output: 10

    *ptr = 20; // Change the value at the address pointed to by ptr

    printf("New value of a: %d\n", a); // Output: 20
    return 0;
}