#include<stdio.h>
int main()
{
    float p;
    printf("Principal = ");
    scanf("%f",&p);
    float r;
    printf("Rate = ");
    scanf("%f",&r);
    float t;
    printf("Time = ");
    scanf("%f",&t);
    float SI;
    SI=(p*r*t)/100;
    printf("Simple interest is %0.3f",SI);
    return 0;

}