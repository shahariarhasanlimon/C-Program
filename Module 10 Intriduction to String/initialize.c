//String Initialize and Print

#include <stdio.h>
int main() {
    // char str[20] = "Hello, World!"; // Initialize the string with a value
    // printf("%s\n", str); // Print the string using %s format specifier
    // return 0;
    char a [5] = {'H', 'e', 'l', 'l', 'o'}; // Initialize an array of characters
    // for(int i = 0; i < 5; i++) {
    //     printf("%c ", a[i]); // Print the elements of the array
    // }
    printf("%s", a); // Print the array as a string (undefined behavior since it's not null-terminated)
    return 0;
} 