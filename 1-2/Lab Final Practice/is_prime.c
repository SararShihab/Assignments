#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n==1)
    {
       printf("Not prime");
    }
    else
    {
        for (int i = 2; i <= n/2; i++)
        {
            if (n%i==0)
            {
                printf("Not prime");
                return 0;
            }
        
        }
        printf("Prime");
        
    }
    return 0;
    
    
}