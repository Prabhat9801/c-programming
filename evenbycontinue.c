#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    for(int x=1;x<=n;x++) {
        if(x%2!=0)
        {
            continue;
        } printf("%d \n",x);
    } return 0;
}