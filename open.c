#include<stdio.h>
int main()
{
    FILE *file=fopen("example1.txt","r");
    if(file=NULL)
    {
        printf("error opening file.\n");
        return 1;
    }
    printf("file opened successfully.\n");
    fclose(file);
    return 0;
}