#include<stdio.h>
#include<string.h>
int main()
{
    //copy one string into another and count number of character copied
    char str1[100];
    char str2[100];
    puts("enter string1 :");
    gets(str1);
    puts("enter string2 :");
    gets(str2);
    int n;
    printf("enter number to be copied :");
    scanf("%d",&n);
    printf("copied string : %s\n",strncpy(str1,str2,n));
    int length = strnlen(str1,n);
    printf("number of character copied : %d\n",length);

return 0;
}