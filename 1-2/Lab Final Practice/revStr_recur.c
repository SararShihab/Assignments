#include<stdio.h>

void revstr(char s[], int index)
{
    if (s[index]=='\n')
    {
        return;
    }
    revstr(s, index+1);
    printf("%c", s[index]);
    
}

int main()
{
    char s[100];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    printf("Reversed string: ");
    revstr(s, 0);
    return 0;
}