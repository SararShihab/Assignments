#include<stdio.h>
int main()
{
    int n1, n2, gcd, remainder;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    while (n2!=0)
    {
        remainder = n1%n2;
        n1 = n2;
        n2 = remainder;
    }
    gcd = n1;

    printf("GCD = %d", gcd);

    return 0;
    
}