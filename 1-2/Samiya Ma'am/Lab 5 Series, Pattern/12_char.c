#include<stdio.h>
int main()
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%c ", i+64);
        }
        printf("\n");
        
    }
    for (int i = n-1; i >= 1; i--)
    {
        for (int j = n-i; j >= 1; j--)
        {
            printf(" ");
        }
        for (int k = i; k >= 1; k--)
        {
            printf("%c ", i+64);
        }
        printf("\n");
    }
    
    return 0;
}