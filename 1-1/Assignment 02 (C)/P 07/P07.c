#include<stdio.h>
int main()
{
    float r, area, pi = 3.1416;
    printf("Enter a radius to get area: ");
    scanf("%f", &r);
    printf("The area is %f square unit", pi*r*r);
    return 0;
}