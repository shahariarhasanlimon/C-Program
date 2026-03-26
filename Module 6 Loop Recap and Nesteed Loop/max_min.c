//Max and Min
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int max = n;
    int min = n;

    for (int i = 1; i < 5; i++) {
        scanf("%d", &n);
        if (n > max) {
            max = n;
        }
        if (n < min) {
            min = n;
        }
    }

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}