#include<stdio.h>//*****
int main()
{
    /*Q:- Find the total number of triplet 
          in the array whose sum is equal 
          to the given value x */
    int n,count = 0;
    printf("enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    int x;
    printf("enter value of x :");
    scanf("%d",&x);
    for(int j=0;j<=n-1;j++)
    {
        for(int k=j+1;k<=n-1;k++)
        {
            for(int l=k+1;l<=n-1;l++)
            {
                if(arr[j]+arr[k]+arr[l]==x)
                {
                    printf("(%d,%d,%d)\n",arr[j],arr[k],arr[l]);
                    count++;
                }
            }
        }
    }
    printf("total no of triplets having sum equal to x : %d",count);
return 0;
}