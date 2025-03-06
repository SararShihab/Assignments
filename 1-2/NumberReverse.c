#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    int rev=0;
    while (x!=0)
    {
        rev = rev*10+x%10;
        x/=10;
    }
    printf("%d", rev);
    return 0;

}