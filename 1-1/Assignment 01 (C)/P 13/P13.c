#include<stdio.h>

int main()
{
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    printf("The hexadecimal equivalent of '%d' is %X", decimal, decimal);
    return 0;
}