// secondary diagonal of a 2D array
#include <stdio.h>
#define SIZE 4
int main() {    
    int matrix[SIZE][SIZE] = {
        {1, 2, 3, 4},   
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    printf("Secondary Diagonal of the Matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", matrix[i][SIZE - 1 - i]); // print elements of the secondary diagonal
    }
    printf("\n");
    return 0;
}