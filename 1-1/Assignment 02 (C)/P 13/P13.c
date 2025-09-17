#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("The quotient of %d divided by 2 is %d", num,  num>>1);
    return 0;
}