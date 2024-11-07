#include<stdio.h>
int main(){
    int n1=0,n2=1,n=5,fib;
    printf("fib series:");
    for(int i=1;i<=n;i++)
    {
        printf("%d",n1);
        fib=n1+n2;
        n1=n2;
        n2=fib;
    }

return 0;

}