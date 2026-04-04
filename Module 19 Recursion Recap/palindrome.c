// Palindrome
#include <stdio.h>
#include <string.h>
int is_palindrome(const char *str) {
    int left = 0;   
    int right = strlen(str) - 1; // get the index of the last character
    while (left < right) {
        if (str[left] != str[right]) {
            return 0; // not a palindrome if characters do not match
        }
        left++; // move left pointer to the right   
        right--; // move right pointer to the left
    }
    return 1; // it's a palindrome if we have checked all characters
}
int main() {
    const char *test_string = "madam";
    if (is_palindrome(test_string)) {
        printf("The string \"%s\" is a palindrome.\n", test_string);
    } else {
        printf("The string \"%s\" is not a palindrome.\n", test_string);
    }   
    return 0;
}