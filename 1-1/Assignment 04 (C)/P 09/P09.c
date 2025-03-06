#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c, discri, root1, root2, real, imaginary;

    printf("Enter three numbers separated by spaces: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    discri = (b*b)-(4*a*c);
    
    if (discri > 0)
    {
        root1 = (-b + sqrt(discri/(2*a)));
        root2 = (-b - sqrt(discri/(2*a)));

        printf("root1 = %lf and root2 = %lf", root1, root2);
    }

    else if (discri == 0)
    {
        root1 = root2 = (-b/(2*a));

        printf("root1 = root2 = %lf", root1);
    }

    else
    {
        real = -b / (2*a);
        imaginary = sqrt(-discri/(2*a));

        printf("root1 = %lf + %lfi and root2 = %lf-%lfi", real, imaginary, real, imaginary);
    }

    return 0;
}