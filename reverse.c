#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value of x = ");
    scanf("%d",&x);
    int y=0;
    while(x!=0)
    {
        y=y*10;
        y=y+(x%10);
       
        x=x/10;
        
    } printf("Reverse = %d",y);
    return 0;
}