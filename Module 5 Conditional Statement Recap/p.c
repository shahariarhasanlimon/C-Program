//First Digit
#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int answer = x/1000;
    if(answer%2==0)
    {
        printf("The first digit is even\n");
    }
    else{
        printf("The first digit is odd\n");
    }
    
    return 0;
}