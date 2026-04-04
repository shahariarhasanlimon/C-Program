// Types of Matrix
#include <stdio.h>
#define ROWS 3
#define COLS 3
int main() {
    int square_matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}   
    };
    int rectangular_matrix[ROWS][COLS + 1] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    printf("Square Matrix (3x3):\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", square_matrix[i][j]);
        }
        printf("\n");
    }
    printf("Rectangular Matrix (3x4):\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS + 1; j++) {
            printf("%d ", rectangular_matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}