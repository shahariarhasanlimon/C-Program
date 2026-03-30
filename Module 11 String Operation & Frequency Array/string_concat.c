//String Concatenation
#include <stdio.h>
int main()
{
    // char str1[100], str2[100];
    // printf("Enter first string: ");
    // fgets(str1, sizeof(str1), stdin);
    // printf("Enter second string: ");
    // fgets(str2, sizeof(str2), stdin);
    
    // // Remove newline character from the end of the strings
    // str1[strcspn(str1, "\n")] = '\0';
    // str2[strcspn(str2, "\n")] = '\0';
    
    // // Concatenate str2 to str1
    // strcat(str1, str2);
    
    // printf("Concatenated string: %s\n", str1);
    
    char a[200], b[100];
    scanf("%s %s", a, b);
    int k=strlen(a);
    for(int i=0; i<=strlen(b); i++)
    {
        a[k]=b[i];
        k++;
    }
    printf("Concatenated string: %s %s", a, b);
    return 0;
}