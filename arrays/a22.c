#include<stdio.h>
#include<stdbool.h>
int main()
{
    //Q:-searching an element x in an array present at all index
    int n;
    printf("enter size of an array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array :");
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    int x;
    printf("enter searching element x :");
    scanf("%d",&x);
    bool flag = false; 
    for(int j=0;j<=n-1;j++)
    {
        if(arr[j]==x)
        {
           printf("elment x is at index %d\n",j);
           flag = true;
        }
    }
    if(flag == false)
    {
         printf("the number is not present in the array");
    }
    return 0;
}