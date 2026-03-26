//Reverse an Array
#include<stdio.h>
int main()
{    int arr[100],n,i,temp;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    printf("Array after reversing: ");
    for(i=0;i<n;i++)    {
        printf("%d ",arr[i]);
    }
    return 0;   
}