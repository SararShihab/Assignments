#include<stdio.h>

int main()
{
    int integer;
    
    printf("Enter an integer number: ");
    scanf("%d", &integer);

    if (integer % 2 == 0)
    {
        printf("%d is a even number.", integer);
    }
    
    else
    {
        printf("%d is a odd number.", integer);
    }

    return 0;
}