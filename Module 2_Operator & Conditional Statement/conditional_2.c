#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 1000)
    {
        printf("You can buy the item.\n");
    }
    else if (tk >= 500)
    {
        printf("You can buy the item, but you will have to borrow some money.\n");
    }
    else
    {
        printf("You cannot buy the item.\n");
    }
    return 0;
}