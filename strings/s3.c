#include<stdio.h>
#include<string.h>
int main()
{
    //scaning and printing the input and output of the string
    char str1[] = "My name is Mishva";
    printf("%s\n",str1);
    puts(str1);

    char str2[100];
    gets(str2);//scan the whole string
    puts(str2);//prints the whole string

    scanf("%[^\n]",str2);//edit set conversion
    printf("%s",str2);   //readline including white space

    printf("\n");

    scanf("%s",str2);//only scans the string before the white space
    printf("your intput : %s",str2); 
 return 0;
}