#include<stdio.h>
int main()
{
    /*find the unique number in a given array
      where all the elements are being 
      repeated twice with one value being unique*/
    int n,count;
    printf("enter size of an array :");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of an array :\n");
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<=n-1;j++)
    {
        count = 0;
        for(int k=0;k<=n-1;k++)
        {
            if(arr[j]==arr[k])
            {
               count++;
            }
        }
        if(count==1)
        {
            printf("unique element is : %d\n",arr[j]);
        }
    }
return 0;
}