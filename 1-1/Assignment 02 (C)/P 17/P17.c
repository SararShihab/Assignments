#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("The number modulus by 8 is %d", num & 7);
    return 0;
}