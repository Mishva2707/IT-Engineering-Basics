#include<stdio.h>
int main()
{
    /*write a program to rotate a matrix 90° clockwise*/
    int r,c;
    printf("enter rows of a matrix :");
    scanf("%d",&r);
    printf("enter cols of a matrix : ");
    scanf("%d",&c);
    int A[r][c];
    printf("enter elements of a matrix :\n");
    for(int i=0;i<=r-1;i++)
    {
        for(int j=0;j<=c-1;j++)
        {
            scanf("%d",&A[i][j]);
        }
    } 
    printf(" 90° rotated matrix is :\n");
    for(int i=0;i<=c-1;i++)
    {
        for(int j=r-1;j>=0;j--)
        {
            printf("%d ",A[j][i]);
        }
        printf("\n");
    }
 return 0;
}