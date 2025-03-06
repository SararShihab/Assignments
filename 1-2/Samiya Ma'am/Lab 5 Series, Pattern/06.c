#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float sum = 0;
    printf("n = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i+=2)
    {
        sum+= (pow(i, 2)/pow(i, 3));
    }
    printf("%.03f", sum);
    return 0;
}