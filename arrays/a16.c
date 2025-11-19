#include<stdio.h>
int main()
{
    /* Q:-find the second largest element 
          in the given array*/
    int n;
    printf("enter size of an array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(int j=0;j<=n-1;j++)
    {
        if(max < arr[j])
        {
            max = arr[j];
        }
    }
    int smax = arr[0];
    for(int k=0;k<=n-1;k++)
    {
        if(arr[k]!=max && smax<arr[k])
        {
            smax = arr[k];
        }
    }
    printf("second maximum value is : %d",smax);
  return 0;
}