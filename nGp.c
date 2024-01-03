#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    for(int y=1;y<=n;y=y*2){
        printf("%d ",y);
    } return 0;
}