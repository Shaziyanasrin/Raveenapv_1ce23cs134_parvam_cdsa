#include<stdio.h>
int main(){
    char name[10];
    printf("Enter the name\n");
    fgets(name,sizeof(name),stdin);
    printf("The name is: %s",name);
    return 0;
}