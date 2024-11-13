#include<stdio.h>
int main(){
int r,c;
printf("enter the no.of rows and column");
scanf("%d%d",&r,&c);
int a[r][c];
printf("enter the elements of array:\n");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&a[i][j]);
    }
    
}
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        //printf("%d ",a[i][j]);
        if(i==j){
            printf("%d",a[i][j]);
        }
    }
    printf("\n");

}
return 0;

}
