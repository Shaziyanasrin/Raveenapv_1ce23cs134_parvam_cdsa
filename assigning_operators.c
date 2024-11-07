#include<stdio.h>
int main(){
    int a=10;
    int b=20;
    a+=b;//a=a+b=30
    printf("%d\n",a);
    a%=b;
    printf("%d\n",a);
    a/=b;
    printf("%d\n",a);
    a-=b;
    printf("%d\n",a);
    a*=b;
    printf("%d\n",a);
    return 0;
    
}