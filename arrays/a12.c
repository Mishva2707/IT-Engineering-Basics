#include<stdio.h>
int main()
{
 /*Q:- count the number of elements in a given array
       greater than a given number x*/
    int n;
    printf("enter size of array :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    int x;
    printf("enter value of x : ");
    scanf("%d",&x);
    int count = 0;
    for(int j=0;j<=n-1;j++)
    {
        if(arr[j]>x)
        {
            count++;
        }
    }
    printf("total number of elements having\n");
    printf("value greater than x is : %d",count);
 return 0;
}