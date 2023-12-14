#include<stdio.h>
 int main()
 {

int n,i=1,sum=0;
printf("enter the value =  ");
scanf("%d",&n);


while(i<n)
{
 	if(n%i==0)
 	sum=sum+i;
 	i++;
  }
  if(sum==n)
  {
 	printf("%d is a perfect number",i);
  }
  else 
  printf("it is not a perfect number");

return 0;
}

