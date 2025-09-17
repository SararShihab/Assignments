#include <stdio.h>

void EvOrOd(int x)
{
    if (x == 0)
    {
        printf("The number is neither Odd nor Even.");
    }
    if (x % 2 == 0)
    {
        printf("The number is Even");
    }
    else
    {
        printf("The number is Odd");
    }
}

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    EvOrOd(x);
    return 0;
}