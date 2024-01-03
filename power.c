#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a = ");
    scanf("%d",&a);
    int b;
     printf("Enter the value of b = ");
    scanf("%d",&b);
    int x=1;
    for(int i=1;i<=b;i++) {
        x=x*a;
        
    } printf("The value is = %d",x);
    return 0;
 
}