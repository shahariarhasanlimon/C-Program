//Create A New String
#include <stdio.h>
#include <string.h>
int main() {
    char str[20]; // Declare an array of characters to hold the string
    // Initialize the string with a value
    // 
    scanf("%s", str); // Read a string from input (without spaces)
    int length = strlen(str); // Calculate the length of the string using strlen function
    int length_with_null = length + 1; // Calculate the length of the string including the null terminator]
    
    str[5] = '\0'; // Null-terminate the string 
    printf("%s\n", str); // Print the string using %s format specifier
    return 0;
}

