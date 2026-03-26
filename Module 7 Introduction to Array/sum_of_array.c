//Sum of an Array
#include<stdio.h>
int main() {
    int arr[5]; //Declaration of an array of size 5
    int sum = 0; //Variable to store the sum of the array elements
    //Taking input for the array
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    //Calculating the sum of the array elements 
    for (int i = 0; i < 5; i++) {
        sum += arr[i]; //Adding each element to the sum
    }
    //Printing the sum of the array elements
    printf("The sum of the array elements is: %d\n", sum);
    return 0;
}
