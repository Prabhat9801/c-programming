#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    for(int i=n;i<=n*10;i++)
    {
        if(i%n==0) {
            printf("%d\n",i);
            
        }
    } return 0;
}