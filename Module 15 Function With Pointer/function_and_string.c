// function and string.c
#include <stdio.h>
#include <string.h>
void printString(const char *str) {
    printf("String: %s\n", str); // Printing the string
}
int main() {
    const char *myString = "Hello, World!";
    printString(myString); // Passing the string to the function
    return 0;
}