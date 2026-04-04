// 2D Array Printing by Row and Column
#include <stdio.h>
#define ROWS 3
#define COLS 4
int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    printf("2D Array (Matrix) printed by Row:\n");  
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]); // print elements by row
        }
        printf("\n");
    }
    printf("2D Array (Matrix) printed by Column:\n");
    for (int j = 0; j < COLS; j++) {
        for (int i = 0; i < ROWS; i++) {
            printf("%d ", matrix[i][j]); // print elements by column
        }
        printf("\n");
    }
    return 0;
}
    