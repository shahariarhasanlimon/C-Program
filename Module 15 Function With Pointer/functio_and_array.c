// function and array
#include <stdio.h>
void printArray(int *arr, int size) {
    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // Accessing array elements using array indexing
    }
    printf("\n");
}
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    printArray(arr, 5); // Passing the array to the function
    return 0;
}
