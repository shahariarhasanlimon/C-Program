//String Input with Spaces
#include <stdio.h>
#include <string.h>
int main() {
    char str[20]; // Declare an array of characters to hold the string  
    fgets(str, sizeof(str), stdin); // Read a line of input into the array (including spaces)
    // gets(str); // Read a line of input into the array (including spaces) - Note: gets is unsafe and should be avoided
    printf("%s", str); // Print the string using %s format specifier
    return 0;
}
