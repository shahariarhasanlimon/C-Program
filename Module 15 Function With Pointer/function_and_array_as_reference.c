// function and array as reference
#include <stdio.h>
// void printArray(int *arr, int size) {
//     printf("Array elements:\n");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]); // Accessing array elements using array indexing
//     }
//     printf("\n");
// }
// int main() {
//     int arr[5] = {1, 2, 3, 4,  5};
//     printArray(arr, 5); // Passing the array to the function
//     return 0;
// }
void fun(int *arr, int n) {
 arr[0] = 500; // Modifying the first element of the array
}
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    fun(arr, 5); // Passing the array to the function
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]); // Printing the modified array
    }
    printf("\n");   
    return 0;
}