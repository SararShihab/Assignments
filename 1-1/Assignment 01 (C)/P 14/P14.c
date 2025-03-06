#include<stdio.h>

int main ()
{
    int octal;
    printf("Enter an octal number: ");
    scanf("%o", &octal);
    printf("The decimal equivalent of '%o' is %d", octal, octal);
    return 0;
}