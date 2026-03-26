#include<stdio.h>
int main() {
    int arr[5]; //Declaration of an array of size 5
    //Initializing the array
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;        
    arr[4] = 50;            

    //Accessing and printing the elements of the array
    printf("The elements of the array are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
