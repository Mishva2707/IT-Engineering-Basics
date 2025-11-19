#include<stdio.h>
int main()
{
    //star triangle 2
    int n;
    printf("enter number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}