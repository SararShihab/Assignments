#include<stdio.h>
int main()
{
    int n;
    float sum=0;
    printf("n= ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum+=(1/(float)i);
        
    }
    printf("%0.3f", sum);
    return 0;
}