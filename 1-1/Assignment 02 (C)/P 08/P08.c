#include<stdio.h>
int main()
{
    float cel, fahren;
    printf("Enter the temperature in celsius to convert into fahrenheit: ");
    scanf("%f", &cel);
    printf("The temperature in fahrenheit is %f", (cel/5)*9 + 32);
    return 0;

}