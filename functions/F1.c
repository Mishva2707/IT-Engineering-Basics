#include<stdio.h>
//operations of two number using functions
int sum(int x,int y)
    {
        return x+y;
    }
int sub(int x,int y)
    {
        return x-y;
    }
int mult(int x,int y)
    {
        return x*y;
    }
int  modulo(int x,int y)
    {
        return x%y;
    }
int main()
{
    int a,b;
    printf("enter 1st number:");
    scanf("%d",&a);
    printf("enter 2st number:");
    scanf("%d",&b);
    int sumation = sum(a,b);
    printf("sum : %d\n",sumation);
    int subtraction = sub(a,b);
    printf("sub : %d\n",subtraction);
    int multiplication = mult(a,b);
    printf("mult : %d\n",multiplication);
    int modulus = modulo(a,b);
    printf("modulo : %d\n",modulus);

    return 0;
}