#include<stdio.h>
void main()
{
    //1and0 triangle method 2
    int n;
    int a=1;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            {
                a=1;
            }
            else
            {
                a=0;
            }
            printf("%d ",a);
        } 
        printf("\n");
    }
}