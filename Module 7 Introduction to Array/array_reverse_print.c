//Printing Reverse of an Array
#include<stdio.h>
int main() {
    int arr[5]; //Declaration of an array of size 5
    //Taking input for the array
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    //Accessing and printing the elements of the array in reverse order
    printf("The elements of the array in reverse order are:\n");    
    for (int i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    return 0;
}
