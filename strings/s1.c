#include<stdio.h>
int main()
{
    //ascii values
    char arr[5] = {'a','b','c','d','e'};
    for(int i=0;i<=4;i++)
    {
        printf("%c : %d\n",arr[i],arr[i]);
    }

    char brr[5] = {'A','B','C','D','E'};
    for(int i=0;i<=4;i++)
    {
        printf("%c : %d\n",brr[i],brr[i]);
    }
    char crr[9] = {'1','2','3','4','5','6','7','8','9'};
    for(int i=0;i<=8;i++)
    {
        printf("%c : %d\n",crr[i],crr[i]);
    }
    
    char ch = '\0'; //null character
    printf("%c : %d",ch,ch);
return 0;
}