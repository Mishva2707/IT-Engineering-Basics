#include<stdio.h>
int main()
{
    /*wap to find a duplicate element from a
      given arrao of integers*/
    int n;
    printf("enter size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of an array :\n");
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<=n-1;j++)
    {
        for(int k=j+1;k<=n-1;k++)
        {
            if(arr[j]==arr[k])
            {
                printf(" %d is duplicate element\n",arr[j]);
                break;
            }
        }
    }
    return 0;
}