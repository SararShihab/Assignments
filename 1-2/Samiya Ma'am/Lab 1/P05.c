#include<stdio.h>
#include<ctype.h>

int main()
{
    char upp, low;
    printf("Enter the lowercase character: ");
    scanf("%c", &low);
    if(isalpha(low))
    {
        if(islower(low))
        {
            printf("The uppercase is %c", low-32);
        }
        else
        {
            printf("The alphabet is not lowercase");
        }
    }
    else
    {
        printf("Invalid input. Please enter an alphabet");
    }

    return 0;
}