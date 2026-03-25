//Nesteed if else statement

#include<stdio.h>
int main(){
    int tk;
    scanf("%d", &tk);
    if (tk >= 5000)
    {
        printf("Cox's bazar Jabo\n");
        if(tk >= 10000)
        {
            printf("Saint Martin Jabo\n");
        }
        else
        {
            printf("Saint Martin jabo na\n");
        }
    }
    else
    {
        printf("Cox's bazar jabo na\n");
    }
    return 0;

}