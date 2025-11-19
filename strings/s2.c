#include<stdio.h>
int main()
{
    //initialising a string
    char str1[] = {'H','e','l','l','o',' ','W','o','r','l','d','\0'};//in this initialisation computer 
    for(int i=0;i<=10;i++)                                           // cannot take \0 by its own so we have
    {                                                                //to initialise it in the string
        printf("%c ",str1[i]); 
    }
    printf("\n");
    int i=0;
    while(str1[i]!='\0')
    {
        printf("%c ",str1[i]);
        i++;
    }
    printf("\n");
    char str2[] = "My name is Mishva Menpara";//in this type of initialisation computer \0 by its own
    int j=0;
    while(str2[j]!='\0')
    {
        printf("%c ",str2[j]);
        j++;
    }
    printf("\n");
    //modification in a string
    str2[16] = 65; //'A';
    int k=0;
    while(str2[k]!='\0')
    {
        printf("%c ",str2[k]);
        k++;
    }
    return 0;
}                                                                