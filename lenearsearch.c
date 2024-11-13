#include<stdio.h>
int main()
{
    int n ;
    int arr[]={2,5,7,19,8};
    printf("enter the searching element\n");
    scanf("%d",&n);
    for(int i=0;i<5;i++)
    {
        if(n==arr[i])
        {
            printf("the element is present in array\n");
            return 0;
        }
    }
     printf("there is no such elements");  
     return 0 ;    
    }
    

