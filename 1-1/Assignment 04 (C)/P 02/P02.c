#include<stdio.h>

int main()
{
    int a, b, max;
    
    printf("Enter two integer numbers separated by spaces: ");
    scanf("%d %d", &a, &b);

    if (a>b)
    {
        max = a;
    }

    else
    {
        max = b;
    }

    printf("%d is the maximum among %d and %d", max, a, b);
    
    return 0;
}