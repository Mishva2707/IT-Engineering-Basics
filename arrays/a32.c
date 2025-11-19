#include<stdio.h>
#include<limits.h>
int main()
{
    /*find out the max and min element in the
      2D array and corresponding index*/
    int r;
    printf("enter rows of matrix : ");
    scanf("%d",&r);
    int c;
    printf("enter cols of matrix : ");
    scanf("%d",&c);
    int arr[r][c];
    printf("enter elements of a matrix :\n");
    for(int i=0;i<=r-1;i++)
    {
        for(int j=0;j<=c-1;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int max = INT_MIN;  //arr[0][0] = max
    int min = INT_MAX;  //arr[0][0] = min
    int maxr = INT_MIN; //maxr = 0
    int maxc = INT_MIN; //maxc = 0
    int minr = INT_MAX; //minr = 0
    int minc = INT_MAX; //minc = 0
    for(int i=0;i<=r-1;i++)
    {
        for(int j=0;j<=c-1;j++)
        {
            if(max < arr[i][j])
            {
                max = arr[i][j];
                maxr = i;
                maxc = j;
            }
            if(min > arr[i][j])
            {
                min = arr[i][j];
                minr = i;
                minc = j;
            }
        }
    }
    printf("%d is the max element at index (%d,%d) \n",max,maxr,maxc);
    printf("%d is the min element at index (%d,%d)\n",min,minr,minc);  
return 0;
}