#include<stdio.h>
#include<limits.h>
int main()
{
    /*maximum and minimum value out of all
      elements of an array with index*/
    int n;
    printf("enter size of array :");
    scanf("%d",&n);
    int arr[n];
    int max = INT_MIN; //or write max = -1 or arr[0]
    int maxi = INT_MIN;
    int min = INT_MAX;
    int mini = INT_MAX;
    for(int i=0;i<=n-1;i++)
    {
        printf("enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<=n-1;j++)
    {
        if(max < arr[j])
        {
            max = arr[j];
            maxi = j;
        }
        if(min > arr[j])
        {
            min = arr[j];
            mini = j;
        }
    }
    printf("%d is the max element at index %d \n",max,maxi);
    printf("%d is the min elemement at index %d\n",min,mini);
    return 0;
}