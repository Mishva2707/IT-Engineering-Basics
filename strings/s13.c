#include<stdio.h>
#include<string.h>
int main()
{
    //count number of vowels and consonants in a string
    char str[100];
    puts("enter a string :");
    gets(str);
    int vowel = 0;
    int consonant = 0;
    for(int i=0;i<=strlen(str)-1;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'|| str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vowel++;
        }
        else if(str[i]>'A' && str[i]<='Z' || str[i]>'a' && str[i]<='z')
        {
            consonant++;
        }
    }
    printf("total number of vowels in a string : %d\n",vowel);
    printf("total number of consonants in a string :%d\n",consonant);
    return 0;
}