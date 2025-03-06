#include<stdio.h>
#include<math.h>
#define PI 3.1416;

float rad(float A)
{
    return A/PI;
}
int main()
{
    float A;
    printf("Enter the area: ");
    scanf("%f", &A);
    float r = sqrt(rad(A));
    printf("Radius: %f", r);
    return 0;

}