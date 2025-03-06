#include<stdio.h>

int main()
{
    int a, b, c;
    
    printf("Enter integer lengths of three sides of a tringle separated by spaces: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a==b && b==c)
    {
        printf("The tringle is 'Equilateral'");
    }
    else if(a==b || b==c || a==c)
    {
        printf("The tringle is 'Isosceles'");
    }
    else
    {
        printf("The tringle is 'Scalene'");
    }

    return 0;
}