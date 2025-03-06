#include <stdio.h>

int main() 
{
    char upper;
    printf("Enter an uppercase character: ");
    scanf("%c", &upper);
    printf("The lowercase of '%c' is %c.", upper, upper + 32);
    return 0;
}