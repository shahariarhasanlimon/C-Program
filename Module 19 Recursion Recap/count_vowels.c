// Count Vowels
#include <stdio.h>
int count_vowels(const char *str) {
    if (*str == '\0') { 
        return 0; // base case: end of string
    }
    char current_char = *str;   
    int count_for_current = (current_char == 'a' || current_char == 'e' || 
                             current_char == 'i' || current_char == 'o' || 
                             current_char == 'u' || current_char == 'A' || 
                             current_char == 'E' || current_char == 'I' || 
                             current_char == 'O' || current_char == 'U') ? 1 : 0;
    return count_for_current + count_vowels(str + 1); // recursive call with next character
}
int main() {    
    const char *my_string = "Hello, World!";
    int vowel_count = count_vowels(my_string);
    printf("The number of vowels in the string \"%s\" is: %d\n", my_string, vowel_count);    
    return 0;
}   