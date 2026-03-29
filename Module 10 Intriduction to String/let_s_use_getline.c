//Let_s use Getline
#include <stdio.h>
#include <stdlib.h>
int main() {
    char a [1000000]; // Declare an array of characters to hold the string
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin); // Read a line of input into the array using fgets
    for(int i = 0; a[i] != '\0'; i++) {
        if (a[i] == '\n') { // Check for newline character
            a[i] = '\0'; // Replace newline with null terminator
            break; // Exit the loop after replacing the newline
        }
    }
    printf("You entered: %s", a); // Print the string using %s format specifier
    return 0;
}