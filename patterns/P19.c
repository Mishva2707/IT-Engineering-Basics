#include<stdio.h>
void main()
{
    //star triangle 3
    int n;
    int a=1;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i+1;j--)
        {
            printf("  ");    
        }
        for(int k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}