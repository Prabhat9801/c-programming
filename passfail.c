#include<stdio.h>
int main()
{
    int x;
    printf("Enter the marks of students to determine that he or she is passed or not = ");
    scanf("%d",&x);
    if(x>30&&x<=100){
    printf("pass");}
    else {
        printf("Fail");
    } return 0;
}