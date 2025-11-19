#include<stdio.h>//*****
/*rotate the given array by k steps,where k is
  non-negative(k can be greater than n)*/
void reverse(int arr[],int si,int ei)
{
    for(int i=si,j=ei;i<j;i++,j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
return;
}
int main()
{
    int n;
    printf("enter the size of an array : ");
    scanf("%d", &n);
    int arr[n];
    printf("enter array elments :\n");
    for (int i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k;
    printf("enter value of k to rotate array by k steps : ");
    scanf("%d", &k);
    k=k%n;
    reverse(arr,0,n-1);
    for(int j=0;j<=n-1;j++)
    {
        //printf("%d ",arr[j]);
        arr[j]; 
    }
    //printf("\n");
    reverse(arr,0,k-1);
    for(int j=0;j<=n-1;j++)
    {
        //printf("%d ",arr[j]);
        arr[j];
    }
    //printf("\n");
    reverse(arr,k,n-1);
    printf("array after rotating it by %d steps :\n");
    for(int j=0;j<=n-1;j++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}