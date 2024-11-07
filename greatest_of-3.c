#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a\n ");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);
    printf("entere the value of c\n");
    scanf("%d",&c);
    if(a>b && a>c){
        printf(" a is greater ");
        
    }else if(b>c && b>a){
    printf(" b is greater");

    }else{
        printf("c is greater");
            }
}