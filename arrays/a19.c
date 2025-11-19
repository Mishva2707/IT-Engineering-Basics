#include<stdio.h>
int main()
{
    //pallindrome array
    int n,flag=0;
    printf("enter size of array : ");
    scanf("%d",&n); 
    int arr[n];
    printf("enter a pallindrom number : \n");
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int k=0;k<=n-1;k++)
    {
        if(arr[k]!=arr[n-k-1])
        {
            flag = 0;
            break;
        }
        else
        {
            flag = 1;
        }
    }
    if(flag==1)
    {
        printf("given array is a pallindrome");
    }
    else
    {
        printf("given array is not a palindrome");
    }
    
return 0;
}