#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers separated by spaces: ");
    scanf("%d %d", &a, &b);
    printf("The sum of %d and %d is %d", a, b, a+b);
    return 0;
}