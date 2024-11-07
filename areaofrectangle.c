#include<stdio.h>
int rect(int x,int y){
    int c=x*y;
    return c;
}
int main(){
int b=10,h=20;
int area=rect(b,h);
printf("the area of the rectangle %d",area);
return 0;
}