#include<stdio.h>

void reverseString(char str[], int index)
{
    if(str[index]=='\0')
    {
        return;
    }
    reverseString(str, index+1);
    printf("%c", str[index]);
}

int main()
{
    char str[100];
    printf("Enter String: ");
    gets(str);
    printf("Reversed String: ");
    reverseString(str, 0);
    
    return 0;

}