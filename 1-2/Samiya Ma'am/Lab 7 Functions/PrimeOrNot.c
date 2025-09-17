#include <stdio.h>

void PrimeOrNot(int n)
{
    if (n == 1)
    {
        printf("The number is not a prime number.");
    }
    else
    {

        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                printf("The number is not a prime number.");
                break;
            }
            else
            {
                printf("The number is a prime number.");
                break;
            }
        }
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    PrimeOrNot(n);
    return 0;
}