#include<stdio.h>
int main()
{
    //swaping of a number with using a third  variable 
    int a;
    printf("enter value of a :");
    scanf("%d",&a);
    int b;
    printf("enter value of b :");
    scanf("%d",&b);
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("the value of a and b is after swaping in %d and %d", a,b);
    return 0;
}