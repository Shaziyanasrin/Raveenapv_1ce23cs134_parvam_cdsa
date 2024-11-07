#include<stdio.h>
int main(){
    int a,b;
    printf(" enter a number a \n");
    scanf("%d",&a);
    printf(" a value of b is\n");
    scanf("%d",&b);
   
    int res=(a>b)?a:b;
     printf("the greatest number is%d\n",res);
     return 0;
}