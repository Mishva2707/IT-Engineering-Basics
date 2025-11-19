#include<stdio.h>
int main()
{
    //swaping of two numbers without using third variable
    int a;
    printf("enter value of a :");
    scanf("%d",&a);
    int b;
    printf("enter value of b :");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("value of a and b after swaping is %d and %d", a,b);

  return 0;  
}
