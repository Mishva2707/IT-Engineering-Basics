#include<stdio.h>
int main()
{
    /*Q:- Given an array of integers,
     change the value of all odd indexed elements 
     to its second multiple
     and increment all even indexed value by 10 */
    int n;
    printf("enter size of array :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<=n-1;j++)
    {
        if(j%2!=0)
        {
            arr[j]*=2;
        }
        else
        {
            arr[j]+=10;
        }
    }
    printf("new array after changes :\n");
    for(int k=0;k<=n-1;k++)
    {
        printf("arr[%d] = %d\n",k,arr[k]);
    }

    return 0;
}