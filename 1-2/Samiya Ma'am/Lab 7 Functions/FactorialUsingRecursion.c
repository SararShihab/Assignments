#include<stdio.h>

int fact(int x)
{
    if(x==0)
    {
        return 1;
    }
    else
    {
        return x*fact(x-1);
    }
}

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("The factorial of %d is %d", x, fact(x));
    return 0;
}