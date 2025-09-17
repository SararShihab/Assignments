#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a == 2 || a == 3 || a == 5)
    {
        printf("%d is a prime number", a);
    }
    else if (a % 2 == 0 || a % 3 == 0 || a % 5 == 0 || a == 1)
    {
        printf("%d is not a prime number", a);
    }
    else
    {
        printf("%d is a prime number", a);
    }

    return 0;
}
