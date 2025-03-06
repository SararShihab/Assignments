#include<stdio.h>
int main()
{
    int a, num, reversed=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    a=num;
    while (num != 0)
    {
        
        reversed = (reversed*10)+(num%10);
        num/=10;
        
    }

    if (reversed==a)
    {
        printf("The number is a palindrome number");
    }
    else
    {
        printf("The number is not a palindrome number");
    }

    return 0;
    
    
}