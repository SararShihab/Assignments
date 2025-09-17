#include<stdio.h>
int main ()
{
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number by which you wanna divide %d to get remainder: ", a);
    scanf("%d", &b);
    printf("The remainder is %d", a%b);
    return 0;
}