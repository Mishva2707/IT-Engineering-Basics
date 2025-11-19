#include<stdio.h>
int main()
{
    /*given a matrix 'A' of dimension rxc and
      2 coordinates (l1,r1) and (l2,r2). return 
      the sum of the rectangle from (l1,r1) to (l2,r2)
      also called sum of a submatrix*/
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
    int l1,l2,r1,r2;
    printf("enter coordinate of top left corner(l1,r1) :");
    scanf("%d%d",&l1,&r1);
    printf("enter coordinate of bottom right corner(l2,r2) :");
    scanf("%d%d",&l2,&r2);
    int sum = 0;
    printf("sum of all elements of a submatrix :\n");
    for(int i=l1;i<=l2;i++)
    {
        for(int j=r1;j<=r2;j++)
        {
            sum += arr[i][j];
        }
    }
    printf("%d",sum);  
    return 0;
}