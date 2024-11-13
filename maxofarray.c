#include<stdio.h>
int main()
{   int max=0;
    int arr[]={100,6,180,19,150};
    for(int i=0;i<=5;i++){
        if(arr[i]>max){
            max=arr[i];
            }
    }
       printf("the maximum of the number is:%d\n",max);
    return 0;
}

