// Diagonal Matrix using 2D Array
#include <stdio.h>
#define SIZE 4
int main() {    
    int diagonal_matrix[SIZE][SIZE] = {
        {1, 0, 0, 0},
        {0, 2, 0, 0},
        {0, 0, 3, 0},
        {0, 0, 0, 4}
    };
    printf("Diagonal Matrix (4x4):\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", diagonal_matrix[i][j]); // print each element of diagonal matrix
        }
        printf("\n");
    }
    return 0;
}