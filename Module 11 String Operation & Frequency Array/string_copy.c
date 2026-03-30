//String Copy
#include<stdio.h>
#include<string.h>
int main()
{    char str1[100],str2[100];
    // 
    scanf("%s %s", str1, str2);
    for(int i=0; str1[i]!='\0'; i++)
    {
        str2[i]=str1[i];
    }
    printf("Copied string is: %s", str2);
    return 0;
}