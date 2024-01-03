#include<stdio.h>
int main()
{
    int a,b,i,n,c;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    a=b=1;
    printf("%d %d ",a,b);
    for(i=1;i<=n-2;i++) {

    c=a+b;
    printf("%d ",c);
    a=b;
    b=c; 
    } return 0;
    
}