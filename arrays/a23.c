#include<stdio.h>
/*Q:-Given an array containing elements from
     1 to n except one elment in this range 
     is missing.Find the missing elment*/
int main()
{
    int n;
    printf("enter size of array : ");
    scanf("%d",&n); 
    int arr[n];
    int sum = 0;
    printf("enter array elements :\n");
    for(int j=0;j<=n-2;j++)
    {
        scanf("%d",&arr[j]);
        sum += arr[j];
    }
    int sum2 = (n*(n+1))/2;
    printf("missing element is : %d",sum2-sum);
return 0;
}