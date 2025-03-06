#include<stdio.h>

int main()
{
    char text[200];
    printf("Enter a line of text: ");
    scanf("%[^\n]s", &text);
    printf("%s", text);
    return 0;
}