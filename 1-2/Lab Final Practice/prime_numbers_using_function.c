#include<stdio.h>
int isPrime(int n)
{
    if(n<=1)
    {
        return 0;
    }
    for (int i = 2; i <= n/2; i++)
    {
        if (n%i==0)
        {
            return 0;
        }
        
    }
    return 1;
    
}
int main()
{
    int a, b;
    printf("Enter range: ");
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        if(isPrime(i))
        {
            printf("%d ", i);
        }
    }
    return 0;
}