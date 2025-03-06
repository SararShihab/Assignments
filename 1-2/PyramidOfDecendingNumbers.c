#include <stdio.h>
int main()
{
    int n = 5;
    // for (int k = 1; k <= n; k++)
    // {
    //     for (int i = 1; i <= n-k; i++)
    //     {
    //         printf(" ");
    //     }
    //     for (int i = k; i >= 1; i--)
    //     {
    //         printf("%d ", i);
    //     }
    //     printf("\n");
    // }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
        for (int k = i; k >= 1; k--)
        {
            printf("%d ", k);
        }
        printf("\n");
        
    }
    

    return 0;
}