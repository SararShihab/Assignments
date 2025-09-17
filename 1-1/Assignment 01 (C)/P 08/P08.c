#include<stdio.h>

int main ()
{
    int ASCII;
    printf("Enter an ASCII value: ");
    scanf("%d", &ASCII);
    printf("The equvalent character of '%d' is %c", ASCII, ASCII);
    return 0;
}