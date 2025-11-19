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
    int maxcount = INT_MIN;
    int maxidx = INT_MIN;
    for(int i=0;i<=r-1;i++)
    {
        int count = 0;
        for(int j=0;j<=c-1;j++)
        {
            if(A[i][j]==1)
            {
            count++;
            }
        }
        if(count>maxcount)
        {
            maxcount = count;
            maxidx = i;
        }
    }
    printf("row number having max number of 1 : %d\n",maxidx);
    printf("elements of that row are :\n");
    for(int j=0;j<=c-1;j++)
    {
        printf("%d ",A[maxidx][j]);
    }
    printf("\ntotal no of one in that row are : %d",maxcount);
 return 0;
}