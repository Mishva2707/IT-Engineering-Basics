#include<stdio.h>
int factorial(int n)
{
    //permutation using function 
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact*=i;
    }
    return fact;
}
int permutation(int n,int r)
{
    int nPr = factorial(n)/factorial(n-r);
    return nPr;
}
int main()
{
    int n,r;
    printf("enter a number:");
    scanf("%d", &n);
    printf("enter a number:");
    scanf("%d", &r);
    
    int nPr = permutation(n,r);
    printf("nPr = %d",nPr);
    
    return 0;
}