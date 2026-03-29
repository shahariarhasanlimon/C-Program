//Count
#include <stdio.h>
#include <string.h>
int main() {
    char str[20] = "Hello, World!"; // Initialize the string with a value
    int length = strlen(str); // Calculate the length of the string using strlen function
    int count = 0; // Initialize a counter variable
    for(int i = 0; str[i] != '\0'; i++) { // Iterate through the string until the null terminator is reached
        count++; // Increment the counter for each character
    }
    printf("Length of the string: %d\n", length); // Print the length of    

    printf("Count of characters in the string: %d\n", count); // Print the count of characters in the string
    return 0;
}