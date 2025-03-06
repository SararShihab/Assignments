#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);
    if (isalpha(ch))
    {
        printf("Alphabet");
    }
    else
    {
        printf("Not Alphabet");
    }
    return 0;
    
}