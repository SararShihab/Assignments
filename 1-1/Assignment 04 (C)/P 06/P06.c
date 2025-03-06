#include<stdio.h>

int main()
{
    float marks;
    
    printf("Enter marks: ");
    scanf("%f", &marks);

    if(marks<40)
    {
        printf("Fail");
    }

    else
    {
        printf("Pass");
    }

    return 0;
}