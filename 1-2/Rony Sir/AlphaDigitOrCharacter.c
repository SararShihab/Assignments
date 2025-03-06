#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if(isalpha(ch))
    {
        printf("%c is an alphabet.", ch);
    }
    else if(ch>='0' && ch<='9')
    {
        printf("%c is a digit.", ch);
    }
    else
    {
        printf("%c is a special character.", ch);
    }

    return 0;
}