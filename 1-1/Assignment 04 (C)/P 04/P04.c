#include<stdio.h>

int main()
{
    int a, b, c, max;
    
    printf("Enter three numbers separated by spaces: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a>b && a>c)
    {
        max = a;
    }

    else if (b>a && b>c)
    {
        max = b;
    }

    else
    {
       max = c;
    }
    
    printf("%d is the maximum among %d, %d and %d", max, a, b, c);
    
    return 0;
    
}