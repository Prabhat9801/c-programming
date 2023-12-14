
#include<stdio.h>
#include<math.h>
#define P 3.14
int main()
{ float r,area;
printf("Enter the radius = ");

scanf("%f",&r);
area=P*r*r;





printf("Area of the circle = %f m^2",area);
printf("\nEnter the radius = ");
scanf("%f",&r);
printf("Perimeter of the circle = %f m",2*P*r);
return 0;
    
}