#include<stdio.h>
/*Q:-Given an array containing elements from
     1 to 100 except one elment in this range 
     is missing.Find the missing elment*/
int main()
{
    int arr[100];
    int sum = 0;
    printf("enter array elements :\n");
    for(int j=0;j<=98;j++)
    {
        scanf("%d",&arr[j]);
        sum += arr[j];
    }
    int sum2 = (100*(100+1))/2;
    printf("missing element is : %d",sum2-sum);
return 0;
}