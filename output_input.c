#include<stdio.h>
int main()
{
    int a;
    float b;
    char x;
    printf("enter the integer value ");
    scanf("%d",&a);
    printf("enter the float value");
    scanf("%.2f",&b);
    printf("enter the charecter ");
    scanf("%c",&x);
    printf("integer value is%d\n ",a);
    printf("float value is%.2f\n ",b);
    printf("charector value is%c\n",x);
    return 0;
}