#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter the n'th term: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i+=2)
    {
        sum+=i;
    }
    printf("%d", sum);
    return 0;
    
    
}