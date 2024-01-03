#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    int sum=0;
   
    while(n!=0) {
        int l=n%10;
    
        sum=sum+l;

        n=n/10;
          
        
    }
    printf("the sum is = %d",sum);
    return 0;
}