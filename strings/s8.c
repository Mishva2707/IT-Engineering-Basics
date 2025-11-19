#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50];
    puts("enter string 1 : ");
    //gets(str1);
    fgets(str1,sizeof(str1),stdin);

    char str2[50];
    puts("enter string 2 : ");
    //gets(str2);
    fgets(str2,sizeof(str2),stdin);

    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}