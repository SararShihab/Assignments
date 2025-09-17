#include<stdio.h>
#include<math.h>
int main()
{
    int n, n1, sum = 0;
    
    printf("n = ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        sum += i*pow(n1, 2);
        n1+=2;
    }
    printf("%d", sum);
    return 0;
}