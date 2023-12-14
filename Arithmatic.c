#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the value of x = ");
    scanf("%d",&x);
    printf("Enter the value of y = ");
    scanf("%d",&y);
    printf("Addition is = %d",x+y);
    printf("\nSubstraction is = %d",x-y);
    printf("\nMultiplication is = %d",x*y);
    printf("\nDivision is = %d",x/y);
    printf("\nRemainder is = %d",x%y);
    return 0;
}