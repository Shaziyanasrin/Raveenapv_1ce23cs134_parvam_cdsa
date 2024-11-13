#include<stdio.h>
int main()
{
    FILE *file=fopen("hello.Wjava","r");
    if(file=NULL)
    {
        perror("error opening file.\n");
        return 1;
    }
    printf("file opened successfully.\n");
    fclose(file);
    return 0;
}