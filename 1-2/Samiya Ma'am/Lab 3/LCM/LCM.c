#include<stdio.h>
int main()
{
    int n1, n2, a, b, gcd, lcm, remainder;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    a=n1;
    b=n2;

    while (n2!=0)
    {
        remainder = n1%n2;
        n1 = n2;
        n2 = remainder;
    }
    gcd = n1;
    lcm = (a*b)/gcd;
    printf("LCM = %d", lcm);

    return 0;
}