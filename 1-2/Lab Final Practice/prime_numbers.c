#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter start and end points: ");
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {   int n;
        if (i<=1)
        {
            continue;
        }
        for (int j = 2; j <= i/2; j++)
        {
            if(i%j==0)
            {
                n=0;
                break;
            }
            
        }
        if(n!=0)
        {
            printf("%d ", i);
        }
        n=1;
        
    }

    return 0;
}