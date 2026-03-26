//Even, Odd, Positive and Negative
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("Numbers from 1 to %d:\n", n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d is even\n", i);
        } else {
            printf("%d is odd\n", i);
        }

        if (i > 0) {
            printf("%d is positive\n", i);
        } else if (i < 0) {
            printf("%d is negative\n", i);
        } else {
            printf("%d is zero\n", i);
        }
    }

    return 0;
}