#include<stdio.h>

int sq(int a)
{
    return a*a;
}

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int squ = sq(a);
    printf("The square of %d is %d", a, squ);
    return 0;
}