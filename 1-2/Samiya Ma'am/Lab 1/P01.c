#include<stdio.h>
int main()
{
    float r, pi = 3.1416;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    printf("The are of the circle is %0.4f", r*r*pi);
    return 0;
}