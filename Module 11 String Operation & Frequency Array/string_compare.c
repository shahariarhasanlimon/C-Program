//String Lexicographical Comparison
// 
#include<stdio.h>
int main(){
    // char str1[100],str2[100];
    // scanf("%s %s", str1, str2);
    // int i=0;
    // while(str1[i]!='\0' && str2[i]!='\0')
    // {
    //     if(str1[i]<str2[i])
    //     {
    //         printf("String 1 is smaller than String 2");
    //         return 0;
    //     }
    //     else if(str1[i]>str2[i])
    //     {
    //         printf("String 1 is greater than String 2");
    //         return 0;
    //     }
    //     i++;
    // }
    // if(str1[i]=='\0' && str2[i]=='\0')
    // {
    //     printf("Both strings are equal");
    // }
    // else if(str1[i]=='\0')
    // {
    //     printf("String 1 is smaller than String 2");
    // }
    // else
    // {
    //     printf("String 1 is greater than String 2");
    // }
    char a [100], b[100];
    scanf("%s %s", a, b);
    int i=0;
    while(1)
    {
        if(a[i]=='\0' && b[i]=='\0')
        {
            printf("Both strings are equal");
            break;
        }
        else if(a[i]=='\0')
        {
            printf("String 1 is smaller than String 2");
            break;
        }
        else if(b[i]=='\0')
        {
            printf("String 1 is greater than String 2");
            break;
        }
        else if(a[i]<b[i])
        {
            printf("String 1 is smaller than String 2");
            break;
        }
        else if(a[i]>b[i])
        {
            printf("String 1 is greater than String 2");
            break;
        }
        i++;
    }
    return 0;
}