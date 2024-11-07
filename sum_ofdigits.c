#include<stdio.h>
int main(){
    int i,n;
    int sum=0,digit=0;
     while(n!=0){
        digit=n%10;
        sum=digit+sum;
        n/=10;
    }
    printf("the sum of digits is:%d",sum);
}                       