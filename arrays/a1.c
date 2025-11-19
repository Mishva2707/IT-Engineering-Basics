#include<stdio.h>
int main()
{
    int m,n;
    printf("enter no of rows of 1st matrix : ");
    scanf("%d",&m);
    printf("enter no of cols of 1st matrix : ");
    scanf("%d",&n);
    int A[m][n];
    printf("enter elements of 1st matrix : ");
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    int p,q;
    printf("\nenter no of rows of 2nd matrix : ");
    scanf("%d",&p);
    printf("enter no of cols of 2nd matrix : ");
    scanf("%d",&q);
    int B[p][q];
    printf("enter elements of 2nd matrix : ");
    for(int i=1;i<=p;i++)
    {
        for(int j=1;j<=q;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }

    if(n!=p)
    {
        printf("matrix multiplication is not possible");
    }
    else
    {
        int C[m][q];
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=q;j++)
            {
                C[i][j] = 0;
                for(int k=1;k<=n;k++)
                {
                    C[i][j] += A[i][k]*B[k][j];
                }
            }
        }
        printf("resultant matrix :--\n");
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=q;j++)
            {
                printf(" %d",C[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}