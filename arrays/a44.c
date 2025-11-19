#include<stdio.h>
int main()
{
    //sum of diagonal elements of a matrix
    int n;
    printf("enter rows and columns of a matrix :");
    scanf("%d",&n);
    int arr[n][n];
    printf("enter elements of a matrix :\n");
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=n-1;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int sum = 0;
    for(int i=0;i<=n-1;i++)
    {
        sum = sum + arr[i][i];
    }
    printf("sum of diagonal elements of a matrix is : %d",sum);
    return 0;
}