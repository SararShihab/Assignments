#include<stdio.h>
int max(int a, int b)
{
    printf("Enter a & b: ");
    scanf("%d %d", &a, &b);
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
    
}
int main()
{
    int a, b;
    printf("The max value is %d", max(a, b));
    return 0;
}