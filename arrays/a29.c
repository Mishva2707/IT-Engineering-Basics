#include<stdio.h>
int main()
{
    /*write a program to store 10 at every 
     index of 2D matrix with 5 rows and 5 coloumns*/
    int arr[5][5];
    for(int i=0;i<=4;i++)
    {
        for(int j=0;j<=4;j++)
        {
            arr[i][j] = 10;
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}