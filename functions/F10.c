#include<stdio.h>
int fibonacci(int n)
{
    int sum =0;
    int a=0;
    int b=1;
    if(n==1)
    {
        return a;
    }
    else if(n==2)
    {
        return b;
    }
    else
    {
        for(int i=3;i<=n;i++)
        {
            sum = a+b;
            a = b;
            b = sum;
        }
     return b;
    }
}
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    printf("fibonacci series :\n");
    for(int i=1;i<=n;i++)
    {
        printf("%d ",fibonacci(i));
    }
    return 0;
}