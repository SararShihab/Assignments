#include<stdio.h>

int main()
{
    int a, b, min;
    
    printf("Enter two integer numbers separated by spaces: ");
    scanf("%d %d", &a, &b);

    if (a<b)
    {
        min = a;
    }

    else
    {
        min = b;
    }

    printf("%d is the minimum among %d and %d", min, a, b);
    
    return 0;
}