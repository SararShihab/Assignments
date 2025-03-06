#include<stdio.h>
void revstr(char str[], int index)
{
    if(str[index]=='\0')
    {
        return;
    }
    revstr(str, index+1);
    printf("%c", str[index]);
}
int main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);
    printf("Reversed String: ");
    revstr(str, 0);
    
    return 0;
}