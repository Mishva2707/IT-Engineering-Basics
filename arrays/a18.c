#include<stdio.h>//****
/*Q:-wap to print elements of array 
     in reverse order through swaping.*/
void reverse(int arr[],int n)
{  
    for(int i=0,j=n-1;i<j;i++,j--)
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
    printf("enter size of array : ");
    scanf("%d",&n); 
    int arr[n];
    for(int k=0;k<=n-1;k++)
    {
        printf("arr[%d] = ",k);
        scanf("%d",&arr[k]);
    }
      reverse(arr,n);
    printf("elements of array in reverse order :\n");
    for(int l=0;l<=n-1;l++)
    {
        printf("%d ",arr[l]);
    } 
  return 0;
}