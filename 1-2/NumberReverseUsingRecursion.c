#include<stdio.h>
int rev(int x, int r)
{
    if (x==0)
    {
        return r;
    }
    else
    return rev(x/10, r*10+x%10);
    
}
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Reversed number: %d", rev(x, 0));
    return 0;
}