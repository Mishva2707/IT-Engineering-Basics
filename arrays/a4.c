#include<stdio.h>
int main()
{
    //print roll no of student having marks less than 35
    int marks[10];
    for(int i=0;i<=9;i++)
    {
        printf("enter marks of roll no. %d :",i);
        scanf("%d",&marks[i]);
    }
    printf("roll no of students having marks less than 35 are :\n");
    for(int i=0;i<=9;i++)
    {
    if(marks[i]<35)
    {
        printf("roll no : %d have marks %d",i,marks[i]);
        printf("\n");
    }
    }
    return 0;
}