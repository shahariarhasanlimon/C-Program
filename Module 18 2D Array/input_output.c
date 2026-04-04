// 2D Array Input and Output
#include <stdio.h>
#define ROWS 2
#define COLS 3
int main() {
    int matrix[ROWS][COLS]; 
    printf("Enter elements for a %dx%d matrix:\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]); // read input for each element
        }
    }   
    printf("You entered the following matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]); // print each element
        }
        printf("\n");
    }
    return 0;
}

