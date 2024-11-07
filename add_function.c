#include<stdio.h>
int add(int x,int y){
    int c=x+y;
    return c;
}
int main(){
    int a,b;
    printf("enter a value\n");
    scanf("%d",&a);
    printf("enter b value\n");
    scanf("%d",&b);
    int sum=add(a,b);
    printf("%d",sum);
    return 0;
}