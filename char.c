#include<stdio.h>
int main()
{
    char a='a';
    char c;
    printf("value of a: %c\n",a);
    a++;
    printf("value of after the increment is : %c\n",a);
    c=99;
    printf("value of c: %c",++c);
    return 0;
}