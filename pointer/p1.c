#include<stdio.h>
int main()
{
    int a = 5;
    int *p = &a;//pointer which stores adress of 'a'
    int **p1 = &p;

    printf("%p\n",&a);//address of 'a' will get printed
    printf("%p\n",p);//address of 'a' will get printed
    printf("%p\n",&p);//address of a pointer will get printed
    printf("%p\n",p1);
    printf("%p\n",&p1);
    printf("%p\n",*p1);
    printf("%d\n",**p1);
    printf("%d\n",*p);//will print value of a variable whose address is stored in pointer
    printf("%d\n",a);
   
return 0;
}