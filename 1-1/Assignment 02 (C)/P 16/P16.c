#include<stdio.h>
int main ()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("The number modulus by 4 is %d", num & 3);
    return 0;
}