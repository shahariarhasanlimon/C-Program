// Array Printing using Recursion
#include <stdio.h>
void print_array(int arr[], int size, int index) {
    if (index >= size) {
        return; // base case: stop recursion when index exceeds array size
    }
    printf("%d ", arr[index]); // print current element
    print_array(arr, size, index + 1); // recursive call with next index
}
int main() {
    int my_array[] = {10, 20, 30, 40, 50};
    int size = sizeof(my_array) / sizeof(my_array[0]);
    printf("Array elements:\n");
    print_array(my_array, size, 0); // start printing from index 0
    printf("\nDone!\n");
    return 0;
}