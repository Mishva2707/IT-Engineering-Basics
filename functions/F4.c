#include<stdio.h>
#include<math.h>
int main()
{
    //combination without using funtions
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int r;
    printf("enter a number :");
    scanf("%d",&r);
    int nf=1;
    int rf=1;
    int nrf=1;
    for(int i=1;i<=n;i++)
    {
        nf*=i;
    } 
    for(int i=1;i<=r;i++)
    {
        rf*=i;
    } 
    for(int i=1;i<=n-r;i++)
    {
        nrf*=i;
    }
    int nCr = nf/(rf*nrf);
    printf("%d",nCr); 
    return 0;
}