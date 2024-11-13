#include<stdio.h>
#include<string.h>
int main(){
    char a[50]="hello";
    char b[50];
    char c[50]="thotha";
    strcpy(b,a);
    printf("the copied string is %s\n",b);
    printf("%d\n",strlen(b));
    strcat(a,b);
    printf("concatinated str1 %s\n",a);
    strcat(b,c);
    printf("concatinated sr2 %s\n",b);
    return 0;
}