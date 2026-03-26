//char
#include <stdio.h>
int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);
    if (a >= 'a' && a <= 'z')
    {
        printf("The character is a lowercase letter\n");
    }
    else if (a >= 'A' && a <= 'Z')
    {
        printf("The character is an uppercase letter\n");
    }
    else
    {
        printf("The character is not a letter\n");
    }
    return 0;
}