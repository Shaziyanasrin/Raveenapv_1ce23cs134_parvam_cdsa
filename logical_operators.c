#include<stdio.h>
int main(){
    int a=10;
    int b=20;
    int valid=1;
    if((a>5)&&(b>5)){
        printf("a and b are greater than 5\n");
    }else{
        printf("a and b are not greater to 5\n");
    }if((a>10)||(b>10)){
        printf("a or b is greater than 10\n");
    }else{
        printf("a or b is not greater to   10\n");
    }
    int invalid=!valid;
    printf("%d\n",invalid);
    printf("%d",valid);

}