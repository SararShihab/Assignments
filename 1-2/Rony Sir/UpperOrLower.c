#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if(isalpha(ch))
    {
        if (isupper(ch))
        {
            printf("%c is 'Uppercase'", ch);
        }
        else
        {
            printf("%c is 'Lowercase'", ch);
        }
    }
    else
    {
        printf("%c is not an alphabet.", ch);
    }

    return 0;
}