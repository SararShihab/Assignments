#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int x = sum(a, b);
    printf("The sumation of %d and %d is %d", a, b, x);

    return 0;
}
