#include<stdio.h>

int main()
{
    int hex;
    printf("Enter a hexadecimanl number:");
    scanf("%X", &hex);
    printf("The decimal equivalent of '%X' is %d", hex, hex);
    return 0;

}