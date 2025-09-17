#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, dis, real, imag, root1, root2;
    printf("Enter the coefficiants of a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    
    dis=b*b-4*a*c;
    
    if(dis>0)
    {
        root1 = (-b+sqrt(dis))/(2*a);
        root2 = (-b-sqrt(dis))/(2*a);
        printf("%f and %f", root1, root2);
    }
    else if(dis==0)
    {
        root1 = root2 = (-b)/(2*a);
        printf("%f", root1);
    }
    else
    {
        real=(-b)/(2*a);
        imag=(sqrt(-dis))/(2*a);
        printf("root1 = %0.2f+%0.2f i and root2= %0.2f-%0.2f i", real, imag, real, imag);
    }
    return 0;
}