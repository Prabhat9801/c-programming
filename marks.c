#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value of x = ");
    scanf("%d",&x);
    if(x>=90 && x <100){
    printf("Grade A");}
    else if(x>=80 && x<90){
    printf("Grade B");}
    else if(x >= 70 && x<80){
    printf("Grade C");}
    else{
    printf("Fail");}
    return 0;
    
}