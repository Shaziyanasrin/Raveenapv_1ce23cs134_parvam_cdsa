#include<stdio.h>
int main(){
    int i,n=7;
    if(n==0||n==1)
    {
        printf("not a prime number");
    }
    else if(n==2)
    { 
        printf("the number is prime");
    }
    else
    {
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                printf("the number is prime  ");
            }
        }
    }
    return 0;
}