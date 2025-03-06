#include<stdio.h>
int main ()
{
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number that you wanna subtract from %d: ", a);
    scanf("%d", &b);
    printf("The subtraction of %d and %d is %d", a, b, a-b);
    return 0;
}