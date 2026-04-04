// Unit Matrix using 2D Array
#include <stdio.h>
#define SIZE 4
int main() {    
    int unit_matrix[SIZE][SIZE] = {
        {1, 0, 0, 0},   
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1}
    };
    printf("Unit Matrix (4x4):\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", unit_matrix[i][j]); // print each element of unit matrix
        }
        printf("\n");
    }
    return 0;
}