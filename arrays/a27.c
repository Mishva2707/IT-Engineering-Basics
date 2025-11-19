#include<stdio.h>
int main()
{
    //understanding input output of 2d array
    int arr[3][2] = {{1,2},{3,4},{5,6}};
    int brr[3][3] = {1,2,3,4,5,6,7,8,9};
    int crr[][4]  = {1,2,3,4,5,6,7,8};
    printf("matrix arr :\n");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=1;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("matrix brr :\n");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    printf("matrix crr :\n");
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=3;j++)
        {
            printf("%d ",crr[i][j]);
        }
        printf("\n");
    }
    return 0;
}