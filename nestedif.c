 #include<stdio.h>
 int main()
 {
    int x;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    if(x>0)
    {
        printf("it is the positive number\n");
        if(x%2==0)
        {
            printf("it is divisible by 2");

        }else {
            printf("it is not positive number");

        }
    } else {
            printf("it is not divisible by 2");
        } return 0;
 }