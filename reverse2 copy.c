#include<stdio.h>
int main(){
  long long num=0,rev=0;
    printf("enter the numbers to reverse");
    scanf("%lld",&num);
    while(num!=0){
        rev=rev*10+num%10;
        num/=10;
    }
    printf("the reverse of the given number is %lld",rev);
    return 0;
}
