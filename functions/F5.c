#include<stdio.h>
int factorial(int n)
{
    //combination using function 
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
    int n,r;
    printf("enter a number:");
    scanf("%d", &n);
    printf("enter a number:");
    scanf("%d", &r);
    
    int nCr = combination(n,r);
    printf("nCr = %d",nCr);
    
    return 0;
}