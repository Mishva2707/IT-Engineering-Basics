#include<stdio.h>
int main()
{
    //sum of elements of an array
    int n,sum = 0;
    printf("enter size of array :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<=n-1;j++)
    {
        sum += arr[j];
    }
    printf("sum of all elements of array are : %d",sum);
    return 0;
}