#include<stdio.h>
#include<string.h>
int main()
{   //understanding usfull function in c library
    //strlen()
    char str1[] = "mishva ";
    char str2[] = "menpara ";
    int x = strlen(str1);
    printf("string length  : %d\n",x);
    //strcpy
    strcpy(str1,str2);//replace s1 to s2
    printf("%s",str1);
    strcpy(str2,str1);//replace s2 to s1
    printf("%s\n",str2);
    //strcat
    char str3[] = "mishva";
    strcat(str1,str3);
    printf("%s\n",str1);
    //strcmp
    char s1[] = "mishva";
    char s2[] = "MISHVA";
    char s3[] = "Mishva";
     //if same string returns 0
    printf("%d\n",strcmp(s1,s3));
    //if different string then returns numeric difference between the ascii value of the string
    printf("%d",strcmp(s1,s2));
 return 0;
}