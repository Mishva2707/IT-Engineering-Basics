#include<stdio.h>
int main()
{
    //hollow rectangle
    int n,m;
    printf("enter number of rows:");
    scanf("%d",&n);
    printf("enter number of cols:");
    scanf("%d",&m);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(j==1 || i==n || j==m || i==1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}