#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    int sum=0;
   
    while(n!=0) {
        int l=n%10;
         n=n/10;
        if(l%2==0){
            sum=sum+l;
        }
    
    }
    printf("The sum is = %d",sum);
    return 0;
}