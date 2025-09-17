#include<stdio.h>
int main ()
{
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number by which you wanna divide %d: ", a);
    scanf("%d", &b);
    printf("The quotient of %d divided by %d is %d", a, b, a/b);
    return 0;
}