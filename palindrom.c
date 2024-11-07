#include <stdio.h>
int main()
{
    int num, rev = 0;
    printf("enter the numbers to reverse ");
    scanf("%d", &num);
    int orgnum=num;
    while (num != 0)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    printf("the reverse of the given number is %d\n", rev);
    if (orgnum == rev)
    {
        printf("it is a palindrme: ");
        printf("%d", orgnum);
    }
    else
    {
        printf(" it is not a palindron: ");
        printf("%d", orgnum);
    }
}
