//Counting character frequency in an array of integers
#include <stdio.h>
#include <string.h>
int main(){
    char s [100];
    scanf("%s", s);
    int count[26] = {0}; // Assuming only lowercase letters
    for (int i = 0; i < strlen(s); i++) {
        int value = s[i] - 'a';
        printf("%d ", value);
        count[value]++;
    }
    printf("\nCharacter Frequency:\n");
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c: %d\n", 'a' + i, count[i]);
        }
    }

    return 0;
}
