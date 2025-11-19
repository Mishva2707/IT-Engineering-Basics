#include<stdio.h>
#include<limits.h>
int main()
{
    //minimum value out of  all elements of an array
    int n;
    printf("enter size of array :");
    scanf("%d",&n);
    int arr[n];
    int min = INT_MAX; //or write min = -1 or arr[0]
    for(int i=0;i<=n-1;i++)
    {
        printf("enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<=n-1;j++)
    {
        if(min > arr[j])
        {
            min = arr[j];
        }
    }
    printf("minimum value out of all elements of an array is : %d",min);
 return 0;
}