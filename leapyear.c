#include<stdio.h>
int main(){
    int days;
    printf("enter the number of days in feb\n");
    scanf("%d",&days);
    if(days>28){
    printf("it is a leap year");
}
else{
    printf("it is not a leap year");
}
return 0;
}