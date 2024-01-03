#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    int z=1;
    for(int i=1;i<=n;++i){
    z=z*i;
    
    } printf("The factorial = %d",z);
    
    return 0;
}
