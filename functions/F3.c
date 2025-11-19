#include<stdio.h>
#include<math.h>
int main()
{
    int n,m;
    printf("enter a number :");
    scanf("%d",&n);
    printf("enter a number :");
    scanf("%d",&m);

    int p = pow(n,m);
    printf("n to the power m is : %d",p);

    return 0;
}