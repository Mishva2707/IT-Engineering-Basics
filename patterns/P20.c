#include<stdio.h>
void main()
{
    //star triangle 4
    int n;
    int a=1;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i-1;j++)
        {
            printf("  ");    
        }
        for(int k=n;k>=i;k--)
        {
            printf("* ");
        }
        printf("\n");
    }
}