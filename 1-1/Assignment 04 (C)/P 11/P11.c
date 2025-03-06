#include<stdio.h>

int main()
{
    float x;
    
    printf("Enter a number: ");
    scanf("%f", &x);

    if (x>0)
    {
        printf("The number is 'Positive'");
    }
    else if(x<0)
    {
        printf("The number is 'Negative'");
    }
    else
    {
        printf("The number is 'Zero'");
    }

    return 0;
    
}