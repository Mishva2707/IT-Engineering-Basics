#include<stdio.h>
int main()
{
    //printing elements of array in reverse order
    int n;
    printf("enter size of an array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    printf("elements of array in reverse order :\n");
    for(int j=n-1;j>=0;j--)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}