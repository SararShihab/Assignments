#include<stdio.h>
int main()
{
    int t, m, n;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        scanf("%d %d", &m, &n);
        for (int j = 1; j <= n/2; j++)
        {
            if(n%i!=0)
            {
                printf("%d\n", i);
            }
        }
        
    }
    

    return 0;
}