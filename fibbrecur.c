#include<stdio.h>
int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    for(int i=0,i<num;i++,){
    int res=fib(num);
    printf("%d",res);
    }
    return 0;
}
int fib(int n){//5
    if(n==0){
        return 0;
    }
        else if(n==1||n==2){
            return 1;
        }
    else{
        return fib(n-1)+fib(n-2);4+3
    
}
}