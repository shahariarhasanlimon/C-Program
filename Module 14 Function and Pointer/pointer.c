// Pointers
#include <stdio.h>
int main() {
    int a = 10;
    int *ptr = &a; // ptr is a pointer to an integer, initialized to the address of a
    printf("Value of a: %d\n", a); // Output: 10
    printf("Address of a: %p\n", (void*)&a); // Output:
    printf("Value of ptr (address of a): %p\n", (void*)ptr); // Output:
    printf("Value pointed to by ptr: %d\n", *ptr); // Output:
    *ptr = 20; // Modifying the value of a through the pointer
    printf("New value of a: %d\n", a); // Output: 20
    return 0;
} 