#include<stdio.h>
int main()
{
    //understanding getchar and putchar
    char str[100];
    char ch;
    int i =0;
    puts("enter a string :");
    
    for(int i=0;(ch = getchar()) != '\n';i++)
    {
        str[i] = ch;
    }
    str[i] = '\0';

    puts("your input :");
    for(int j=0;str[j] != '\0';j++)
    {
        putchar(str[j]);
    }
    putchar('\n');
    return 0;
}