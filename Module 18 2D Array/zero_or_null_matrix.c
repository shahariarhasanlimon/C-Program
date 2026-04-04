// Zero or Null Matrix
#include <stdio.h>
#define ROWS 3
#define COLS 3
int main() {
    int zero_matrix[ROWS][COLS] = {0}; // initialize all elements to zero
    int null_matrix[ROWS][COLS] = {{0}}; // also initializes all elements to zero
    printf("Zero Matrix (3x3):\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", zero_matrix[i][j]); // print each element of zero matrix
        }
        printf("\n");
    }
    printf("Null Matrix (3x3):\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", null_matrix[i][j]); // print each element of null matrix
        }
        printf("\n");
    }
    return 0;
}