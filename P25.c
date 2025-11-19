#include <stdio.h>

int main()
{
    //number pyramid 1
    int n;
    printf("enter a number :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(int k=1;k<=i-1;k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}