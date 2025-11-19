#include<stdio.h>
int main()
{
    //understanding input output of 2d array   
    int r,c;
    printf("enter rows of matrix : ");
    scanf("%d",&r);
    printf("enter cols of matrix : ");
    scanf("%d",&c);
    int arr[r][c];
    printf("enter elements of a matrix :\n");
    for(int i=0;i<=r-1;i++)
    {
        for(int j=0;j<=c-1;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("matrix is :\n");
    for(int i=0;i<=r-1;i++)
    {
        for(int j=0;j<=c-1;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
   return 0;
}