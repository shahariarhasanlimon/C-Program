//Digits
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    printf("Digits in %d:\n", n);

    while (n > 0) {
        int digit = n % 10; // Get the last digit
        printf("%d\n", digit);
        n /= 10; // Remove the last digit
    }

    return 0;
}