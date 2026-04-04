// Mirror Array
#include <stdio.h>
#define SIZE 5
void mirror_array(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {    
        int temp = arr[i]; // store current element in temp
        arr[i] = arr[size - 1 - i]; // swap with the corresponding element from the end
        arr[size - 1 - i] = temp; // assign temp to the end element
    }
}
int main() {
    int my_array[SIZE] = {1, 2, 3, 4, 5};
    printf("Original array:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", my_array[i]); // print original array
    }
    printf("\n");   
    mirror_array(my_array, SIZE); // call the function to mirror the array
    printf("Mirrored array:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", my_array[i]); // print mirrored array
    }
    printf("\n");
    return 0;
}
