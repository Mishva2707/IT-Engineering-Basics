#include<stdio.h>
#include<string.h>
int main()
{
    //print reverse of a string
    char str[50];
    puts("enter a string :");
    gets(str);
    puts("the reverse string is :");//gives \n automatically
    for(int i=0,j=strlen(str)-1;i<j;i++,j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    puts(str);
  return 0;
}