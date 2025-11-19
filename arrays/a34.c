#include<stdio.h>
#include<limits.h>
int main()
{
    /*write a program to print the row number
      having the maximum sum and row number 
      of max sum in a given matrix*/
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
    int maxrowsum = INT_MIN;
    int maxrow = INT_MIN;
    for(int i=0;i<=r-1;i++)
    {
        int sum = 0;
        for(int j=0;j<=c-1;j++)
        {
            sum += A[i][j];
        }
        if(sum>maxrowsum)
        {
            maxrowsum = sum;
            maxrow = i;
        }
    }
    printf("row number having max sum : %d\n",maxrow);
    printf("elements of that row are :\n");
    for(int j=0;j<=c-1;j++)
    {
        printf("%d ",A[maxrow][j]);
    }
    printf("\nmaximum sum of this elements : %d",maxrowsum);
 return 0;
}