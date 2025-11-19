#include<stdio.h>
int main()
{
    //printing elements of array
    int n;
    printf("enter size of an array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("enter element %d of index %d: ",i+1,i);
        scanf("%d",&arr[i]);
    }
    printf("elements of array are :\n");
    for(int j=0;j<=n-1;j++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}