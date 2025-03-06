#include<stdio.h>
int main()
{
    float fahren, cel;
    printf("Enter the temperature in fahrenheit to convert into celsius: ");
    scanf("%f", &fahren);
    printf("The temperature in celsius is %f", ((fahren-32)/9)*5);
    return 0;
}