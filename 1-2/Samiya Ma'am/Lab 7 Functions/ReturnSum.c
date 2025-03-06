#include<stdio.h>
int max(int a, int b)
{
    printf("Enter a & b: ");
    scanf("%d %d", &a, &b);
    return a+b;
    
}
int main()
{
    int a, b;
    printf("The sumation is %d", max(a, b));
    return 0;
}