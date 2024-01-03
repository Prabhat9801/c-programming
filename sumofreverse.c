#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value of x = ");
    scanf("%d",&x);
    int y=0;
        int sum=0;
    while(x!=0)
    {
        y=y*10;
        y=y+(x%10);
        x=x/10;
    
        int i=y%10;
        sum=sum+i;
        
    } printf("Reverse = %d",y);
    printf("\nThe sum is = %d",sum);
    return 0;
}