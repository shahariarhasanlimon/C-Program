//Insert Element in an Array
#include<stdio.h>
int main()
{    int arr[100],n,pos,i,num;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position where you want to insert an element: ");
    scanf("%d",&pos);       
    printf("Enter the number you want to insert: ");
    scanf("%d",&num);
    for(i=n-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=num;
    printf("Array after insertion: ");
    for(i=0;i<=n;i++)    {
        printf("%d ",arr[i]);
    }
    return 0;
}