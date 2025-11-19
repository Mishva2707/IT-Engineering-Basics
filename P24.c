#include<stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(int j=65;j<=(2*i-1)+64;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}