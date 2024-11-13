#include<stdio.h>
int main(){
    int sum;
    int arr[3][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6}};
   // printf("%d",arr[][]);
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            //printf("%d ",arr[i][j]);
            sum+=arr[i][j];
        }
        printf("\n");
    
    }
    //printf("\n");
     printf("%d ",sum);
    return 0;
}