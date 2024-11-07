#include<stdio.h>
int add(){
    int a=10,b=20;
    int c=a+b;
    return c;
}
int main(){
    int sum=add();
    printf("the sum is %d",sum);
    return 0;

}