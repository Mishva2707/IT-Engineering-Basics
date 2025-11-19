#include<stdio.h>
int main()
{
    /*write a program to print sum of all 
      elements of a matrix*/
    int r;
    printf("enter rows of matrix : ");
    scanf("%d",&r);
    int c;
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
    int sum = 0;
    printf("sum of all elements of a matrix :\n");
    for(int i=0;i<=r-1;i++)
    {
        for(int j=0;j<=c-1;j++)
        {
            sum += arr[i][j];
        }
    }
    printf("%d",sum);     
return 0;
}