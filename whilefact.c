#include<stdio.h>
int main(){
    int i=1,fact=1,n=10;
    while(i<=n)
    {
        fact*=i;
        i++;
    }
    printf("%d",fact);
}