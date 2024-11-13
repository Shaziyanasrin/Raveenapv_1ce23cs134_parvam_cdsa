#include<stdio.h>
#include<string.h>
int main(){
    char a[50]="world";
    char b[50];
    char c[50]="hello";
    strcpy(b,a);
    printf("the copied string is %s\n",b);
    printf("%d\n",strlen(b));
    strcat(a,b);
    printf("concatination str1 %s\n",a);
    strcat(b,c);
    printf("concatination str2 %s\n",b);
    int res=strcmp(a,c);
    printf("%d\n",res);
    if(res==0){
        printf("both string is equal\n");
    }
    else if(res==1)
    {
        printf("str1 is lesser than str2\n");
        
        
    }
    else{
        printf("str1 is greater than str2\n");
    }
    return 0;
}