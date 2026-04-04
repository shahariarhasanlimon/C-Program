// Length of a String using Recursion
#include <stdio.h>
int string_length(const char *str) {
    if (*str == '\0') {
        return 0; // base case: end of string
    }
    return 1 + string_length(str + 1); // recursive call with next character
}
int main() {
    const char *my_string = "Hello, World!";
    int length = string_length(my_string);
    printf("The length of the string \"%s\" is: %d\n", my_string    
              , length);    
    return 0;
}       

