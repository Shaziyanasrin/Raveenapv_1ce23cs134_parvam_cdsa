#include<stdio.h>
int main()
{   
    int sum=0,n;
    int arr[]={1,2,3,4,5};
    for(int i=0;i<=4;++i)
    {   
    printf("the elements are :%d\n",arr[i]);
        sum+=arr[i];
    }
    printf("the sum of the given array is:%d\n",sum);
    return 0;
}

