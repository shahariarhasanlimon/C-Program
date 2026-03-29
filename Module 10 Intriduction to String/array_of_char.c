//What is String in C?
//String is a sequence of characters terminated by a null character '\0' in C. It is used to store and manipulate text. In C, strings are represented as arrays of characters.
#include <stdio.h>
int main() {
    char str[20]; // Declare an array of characters to hold the string

    // for(int i = 0; i < 20; i++) {
    //     scanf("%c", &str[i]); // Read characters into the array
    // }
    // for(int i = 0; i < 20; i++) {
    //     printf("%c", str[i]); // Print the characters from the array
    // }   

    printf("%d",sizeof(str)); // Print the size of the array (20 in this case)
    
    return 0;
}