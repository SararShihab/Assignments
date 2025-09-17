#include<stdio.h>
#include<string.h>
int main()
{
    char c[100]={'h', 'e'}, s[100]={'l', 'l', 'o'};
    // fgets(c, sizeof(c), stdin);
    // fgets(s, sizeof(s), stdin);
    strcat(c, s);
    printf("Elements: ");
    printf("%s", strrev(c));
    return 0;
}