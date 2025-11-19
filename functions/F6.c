#include<stdio.h>
int factorial(int n)
{
    //pascal triangle 
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact*=i;
    }
    return fact;
}
int combination(int n,int r)
{
    int nCr = factorial(n)/(factorial(r)*factorial(n-r));
    return nCr;
}
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    for( int i=0;i<=n;i++ )
    {
        for(int k=0;k<=n-i;k++)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
            int iCj = combination(i,j);
            printf("%d ",iCj);
        }
        printf("\n");
    }
    return 0;
}


















