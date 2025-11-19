#include<stdio.h>
int main()
{
    //star diamond
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int st=1;//star
    int ml=(n+1)/2;//middle line
    int sp=ml-1;//space
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sp;j++)
        {
            printf("  ");
        }
        for(int k=1;k<=st;k++)
        {
            printf("* ");
        }
        if(i<ml)
        {
            sp--;
            st+=2;
        }
        else
        {
            sp++;
            st-=2;
        }
        printf("\n");
    }
    return 0;
}