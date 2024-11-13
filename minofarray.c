#include<stdio.h>
int main()
{   //int min=;
    int arr[]={100,6,180,19,150};
    for(int i=0;i<=5;i++){
        if(arr[i]<min){
            min=arr[i];
            }
    }
       printf("the min of the number is:%d\n",min);
    return 0;
}

