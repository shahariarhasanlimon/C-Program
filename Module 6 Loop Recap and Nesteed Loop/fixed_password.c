//Fixed Password (EOF)
#include <stdio.h>

int main() {
    int a;
    while (scanf("%d", &a) != EOF) {
        if (a == 1234) {
            printf("Correct Password\n");
        } else {
            printf("Wrong Password\n");
        }
    }

    return 0;
}