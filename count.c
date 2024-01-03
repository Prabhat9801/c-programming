#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value of x = ");
    scanf("%d",&x);
    int y = 0;
    while(x!=0)
     {
        x=x/10;
        y++;
       
       
    }  printf("The number of digits = %d",y);
    return 0;
}