//Remove Element from an Array
#include<stdio.h>
int main()
{    int arr[100],n,pos,i;  
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position where you want to delete an element: ");
    scanf("%d",&pos);       
    for(i=pos-1;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    printf("Array after deletion: ");
    for(i=0;i<n-1;i++)    {
        printf("%d ",arr[i]);
    }
    return 0;
}   
