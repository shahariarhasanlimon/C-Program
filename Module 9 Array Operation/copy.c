//Copy Elements of Two Arrays
#include <stdio.h>
int main() {
    int arr1[100], arr2[100], n, i;
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);
    printf("Enter the elements of the first array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }       
    printf("Elements of the second array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}