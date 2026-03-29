//string input and output
#include <stdio.h>
int main() {
    char str[20]; // Declare an array of characters to hold the string
    for(int i = 0; i < 20; i++) {
        scanf("%c", &str[i]); // Read characters into the array
    }
    for(int i = 0; i < 20; i++) {
        printf("%c", str[i]); // Print the characters from the array
    }
    printf("%d",sizeof(str)); // Print the size of the array (20 in this
    return 0;
}