#include<stdio.h>
//in arrays swaping can be done without using pointers
void array(int arr[])
{
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
}
int main()
{
    int arr[2] = {3,7};
    printf("before swaping arr[0] = %d\n",arr[0]);
    printf("before swaping arr[1] =%d\n",arr[1]);
    
    array(arr);
    printf("after swaping arr[0] = %d\n",arr[0]);
    printf("after swaping arr[1] =%d",arr[1]);
return 0;    
}