#include<stdio.h>

int main ()
{
    char lower;
    printf("Enter a lowercase character: ");
    scanf("%c", &lower);
    printf("The uppercase of '%c' is %c.", lower, lower - 32);
    return 0;
}