#include<stdio.h>

int main()
{
    int a, b, c, min;
    
    printf("Enter three integer numbers separated by spaces: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a<b && a<c)
    {
        min = a;
    }
    
    else if (b<a && b<c)
    {
        min = b;
    }

    else
    {
        min = c;
    }

    printf("%d is the minimum among %d, %d and %d", min, a, b, c);

    return 0;
    
}