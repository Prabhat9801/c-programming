#include<stdio.h>
int main()
{
    float C,F;
    printf("Enter the Fahrenheit = ");
    scanf("%f",&F);
    C=(F-32)*5/9;
    printf("Celcius is = %f",C);
    return 0;
}