#include<stdio.h>
int main()
{
    /*write a program to store roll number 
      and marks of pcm obtained by 4 students side
      by side in a matrix*/
    int arr[4][4]; 
    printf("enter pcm marks :\n");
    printf("rollno: physics: chemistry: maths:\n");
    for(int i=0;i<=3;i++)
    {
        for(int j=0;j<=3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    printf("\n");
    }
  return 0;
}