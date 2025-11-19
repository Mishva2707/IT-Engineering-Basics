#include<stdio.h>
#include<string.h>
int main()
{
    //printing length of the string
    char str[50];
    puts("enter a string : ");
    gets(str);
    int k=0;
    int length=0;
    while(str[k]!='\0')
    {
        length++;
        k++;
    }
    printf("length of the string is : %d",length);
    return 0;
}