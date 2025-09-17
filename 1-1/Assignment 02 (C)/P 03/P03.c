#include<stdio.h>
int main ()
{
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a nubmer by which you wanna multiply %d: ", a);
    scanf("%d", &b);
    printf("The product of %d and %d is %d", a, b, a*b);
    return 0;
}