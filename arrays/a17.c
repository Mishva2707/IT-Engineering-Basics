#include<stdio.h>
int main()
{
    /* Q:-wap to copy the contents of 
          one array into another in the 
          reverse order. */
    int n;
    printf("enter size of an array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    int brr[n];
    printf("array in reverse order : \n");
    for(int j=n-1;j>=0;j--)
    {
        brr[n-j-1] = arr[j];
        printf("brr[%d] = %d\n",n-j-1,brr[n-j-1]);
    }
  return 0;
}