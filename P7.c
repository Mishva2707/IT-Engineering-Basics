#include<stdio.h>
int main()
{
    int n,a;
    printf("enter number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            a=n;
            a=2*j-1;
            printf("%d",a);
        }
        printf("\n");
    }
    return 0;
}