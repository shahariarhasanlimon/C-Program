// Scopes in C
#include <stdio.h>
void functionA() {
    int x = 10; // Local variable to functionA
    printf("Inside functionA, x = %d\n", x);
}
void functionB() {
    int x = 20; // Local variable to functionB
    printf("Inside functionB, x = %d\n", x);
}
int main() {
    functionA();
    functionB();
    return 0;
}