#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a>0)
    {
        printf("The number is Positive.");
    }
    else
    {
        printf("The number is Negative,");
    }    
    return 0;
}