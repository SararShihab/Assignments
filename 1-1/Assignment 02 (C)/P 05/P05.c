#include<stdio.h>
int main ()
{
    float a, b;
    printf("Enter a number: ");
    scanf("%f", &a);
    printf("Enter a number by which you wanna divide %f: ", a);
    scanf("%f", &b);
    printf("The quotient of %f divided by %f is %f", a, b, a/b);
    return 0;
}