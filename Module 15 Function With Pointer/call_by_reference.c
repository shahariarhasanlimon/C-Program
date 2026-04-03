//Call by reference using pointer
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swapping: x = %d, y = %d\n", x, y);
    return 0;
}

// void fun(int *p) {
//     printf("Value of a inside function: %d\n", *p); // Dereferencing the pointer to get the value
//     *p = 20; // Modifying the value at the address pointed to by p
// }

// int main(){
//     int a = 10;
//     printf("Value of a before function call: %d\n", a); 
//     fun(&a); // Passing the address of a to the function
//     printf("Value of a after function call: %d\n", a);
//     return 0;
// }