// Scalar Matrix using 2D Array
#include <stdio.h>
#define SIZE 4
int main() {    
    int scalar_matrix[SIZE][SIZE] = {
        {5, 0, 0, 0},
        {0, 5, 0, 0},
        {0, 0, 5, 0},
        {0, 0, 0, 5}
    };
    printf("Scalar Matrix (4x4):\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", scalar_matrix[i][j]); // print each element of scalar matrix
        }
        printf("\n");
    }
    return 0;
}