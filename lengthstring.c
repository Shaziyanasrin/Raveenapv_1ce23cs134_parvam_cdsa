#include<stdio.h>
int main(){
    char name[10];
    printf("Enter the name\n");
    fgets(name,sizeof(name),stdin);
    printf("The name is: %s",name);
    int length=strlen(name);
    printf("%d is the length of the string",length-1);
    return 0;
}