#include<stdio.h>
#include<ctype.h>
int main()
{
    char alpha;
    printf("Enter an alphabet: ");
    scanf("%c", &alpha);
    if(isalpha(alpha))
    {
        alpha=tolower(alpha);
        if (alpha=='a' || alpha=='e'|| alpha=='i'|| alpha=='o'|| alpha=='u')
        {
            printf("The alphabet is Vowel");
        }
        else
        {
            printf("The alphabet is Consonant");
        }
    }
    else
    {
        printf("The character is not an alphabet");
    }
    return 0;
}