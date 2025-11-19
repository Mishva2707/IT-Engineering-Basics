#include<stdio.h>
int main()
{
    /*multiplication of two matrices*/
    int r1,c1;
    printf("enter rows of a matrix1 : ");
    scanf("%d",&r1);
    printf("enter cols of a matrix1 : ");
    scanf("%d",&c1);
    int arr[r1][c1];
    printf("enter elements of matrix1 :\n");
    for(int i=0;i<=r1-1;i++)
    {
        for(int j=0;j<=c1-1;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int r2,c2;
    printf("enter rows of a matrix2 : ");
    scanf("%d",&r2);
    printf("enter cols of a matrix2 : ");
    scanf("%d",&c2);
    int brr[r2][c2];
    printf("enter elements of matrix2 :\n");
    for(int i=0;i<=r2-1;i++)
    {
        for(int j=0;j<=c2-1;j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }
    if(c1==r2)
    {
        int crr[r1][c2];
        for(int i=0;i<=r1-1;i++)
        {
            for(int j=0;j<=c2-1;j++)
            {
                crr[i][j] = 0;
            }
        }
        for(int i=0;i<=r1-1;i++)
        {
            for(int j=0;j<=c2-1;j++)
            {
               for(int k=0;k<=c1-1;k++)
               {
                    crr[i][j] += arr[i][k]*brr[k][j];
               }
            }
        }
        printf("resultant matrix:\n");
        for(int i=0;i<=r1-1;i++)
        {
            for(int j=0;j<=c2-1;j++)
            {
                printf("%d ",crr[i][j]);
            }
         printf("\n");
        }
    }
    else
    {
        printf("matrix multiplication is not possible");
    }
    return 0;
}