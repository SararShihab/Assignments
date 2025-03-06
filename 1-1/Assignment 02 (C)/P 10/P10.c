#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);
    printf("The bitwise AND of %d and %d is %d", a, b, a&b);
    return 0;
}