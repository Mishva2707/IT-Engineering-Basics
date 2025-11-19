#include<stdio.h>
int main()
{
    /*Q:- Find the difference between the sum of
          elements at even indices to the sum of 
          elements at odd indices */
    int n,sum_E = 0,sum_O = 0;
    printf("enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<=n-1;j++)
    {
        if(j%2==0)
        {
            sum_E+=arr[j];
        }
        else
        {
            sum_O+=arr[j];
        }
    }
    int diff = sum_E - sum_O;
    printf("difference between the sum of elements\n");
    printf("at even indices to the\n");
    printf("sum of elements at odd indices = %d",diff);
    return 0;
}