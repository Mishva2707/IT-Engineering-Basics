#include<stdio.h>
int main()
{
    //ascii table
    char c;
    printf("\n");
    for(char c='A';c<='z';c++)
    {
        if(c>'Z' && c<'a')
        {
            continue;
        }
        printf("|%d - %c",c,c);
    }
    printf("\n");
    return 0;
}