#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    ch = tolower(ch);

    if (isalpha(ch))
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            printf("The alphabet is 'Vowel'.");
        }
        else
        {
            printf("The alphabet is 'Consonant'.");
        }
    }
    else
    {
        printf("Invalid input. Please enter an alphabet.");
    }

    return 0;
}