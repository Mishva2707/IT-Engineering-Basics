#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int flag = 0;
    puts("enter pallindrome string :");
    gets(str);
    for(int i=0;i<=strlen(str)-1;i++)
    {
        if(str[i]!=str[strlen(str)-i-1]) flag = 0;
        else flag = 1;
    }
    if(flag==1)
    {
        printf("given string is a pallinrome");
    }
    else
    {
        printf("given string is not a pallindrome");
    }
    return 0;
}