#include<stdio.h>
void add(int x,int y){
    int c=x+y;
    printf("the sum of the given numbers are %d",c);
}
int main(){
    int a=10,b=20;
    add(a,b);
    return 0;
}