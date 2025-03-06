#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("The number multiplied by 2 is %d", num<<1);
    return 0;
}