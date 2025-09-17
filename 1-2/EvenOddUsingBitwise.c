#include<stdio.h>
int main()
{
    int x;
    printf("Ente the number: ");
    scanf("%d", &x);
    if (x&1)
    {
        printf("Odd");
    }
    else
    {
        printf("Even");
    }
    
    return 0;
}