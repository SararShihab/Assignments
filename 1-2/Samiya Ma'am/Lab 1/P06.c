#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers separated by spaces: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if(a>b && a>c)
    {
        printf("%d is the gretest number", a);
    }
    else if(b>a && b>c)
    {
        printf("%d is the gretest number", b);
    }
    else
    {
        printf("%d is the gretest nuber", c);
    }
    return 0;
}