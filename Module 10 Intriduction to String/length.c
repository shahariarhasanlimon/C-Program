//Length of a String
#include <stdio.h>
#include <string.h>
int main() {
    char str[20] = "Hello, World!"; // Initialize the string with a value
    int length = strlen(str); // Calculate the length of the string using strlen function
    printf("Length of the string: %d\n", length); // Print the length of the string
    return 0;
}