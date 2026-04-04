// Sum of a Matrix
#include <stdio.h>
#define ROWS 3
#define COLS 3
int sum_of_matrix(int matrix[ROWS][COLS]) {
    int sum = 0; // initialize sum to zero
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            sum += matrix[i][j]; // add each element to the sum
        }
    }
    return sum; // return the total sum

}
int main() {
    int my_matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };  
    printf("The matrix is:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", my_matrix[i][j]); // print each element of the matrix
        }
        printf("\n");
    }
    int total_sum = sum_of_matrix(my_matrix); // call the function to calculate the sum 
    printf("The sum of all elements in the matrix is: %d\n", total_sum); // print the result
    return 0;
}