// Array and pointer
#include <stdio.h>  
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    // int *ptr = arr; // Pointing to the first element of the array

    // printf("Array elements using pointer:\n");
    // for (int i = 0; i < 5; i++) {
    //     printf("%d ", *(ptr + i)); // Accessing array elements using pointer arithmetic
    // }

    Printf("Array elements using array indexing:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]); // Accessing array elements using array indexing
    }

    printf("\n");
    printf("Array elements using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(arr + i)); // Accessing array elements using pointer arithmetic
    }

    printf("\n");
    printf("Array elements using pointer increment:\n");
    int *ptr = arr; // Pointing to the first element of the array
    for (int i = 0; i < 5; i++) {
        printf("%d ", *ptr); // Accessing the current element pointed to by ptr
        ptr++; // Moving the pointer to the next element
    }

    printf("\n");
    printf("Array elements using pointer decrement:\n");
    ptr = arr + 4; // Pointing to the last element of the array
    for (int i = 0; i < 5; i++) {
        printf("%d ", *ptr); // Accessing the current element pointed to by ptr
        ptr--; // Moving the pointer to the previous element
    }

    printf("\n");
    printf("Array elements using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(arr + i)); // Accessing array elements using pointer arithmetic
    }

    printf("\n");
    printf("Array elements using pointer arithmetic in reverse:\n");
    for (int i = 4; i >= 0; i--) {
        printf("%d ", *(arr + i)); // Accessing array elements in reverse using pointer arithmetic
    }

    printf("\n");
    printf("Array elements using pointer increment in reverse:\n");
    ptr = arr + 4; // Pointing to the last element of the array
    for (int i = 0; i < 5; i++) {
        printf("%d ", *ptr); // Accessing the current element pointed to by ptr
        ptr--; // Moving the pointer to the previous element
    }

    printf("\n");
    printf("Array elements using pointer decrement in reverse:\n");
    ptr = arr; // Pointing to the first element of the array
    for (int i = 0; i < 5; i++) {
        printf("%d ", *ptr); // Accessing the current element pointed to by ptr
        ptr++; // Moving the pointer to the next element
    }
    

    printf("\n");

    return 0;
}