#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 1000)
    {
        printf("You can buy the item.\n");
    }
    else
    {
        printf("You cannot buy the item.\n");
    }
    return 0;
}