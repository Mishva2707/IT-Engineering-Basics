#include<stdio.h>
int main()
{
    //write a program to add two matrices
    int n;
    printf("enter rows of matrix 1 and 2 : ");
    scanf("%d",&n);
    int m;
    printf("enter cols of matrix 1 and 2 : ");
    scanf("%d",&m);
    int arr[n][m];
    printf("enter elements of a matrix 1:\n");
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=m-1;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int brr[n][m];
    printf("enter elements of a matrix 2:\n");
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=m-1;j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }
    printf("resultant matrix after addition :\n");
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=m-1;j++)
        {
            printf("%d ",arr[i][j] + brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}