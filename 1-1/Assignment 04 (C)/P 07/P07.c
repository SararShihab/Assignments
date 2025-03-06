#include<stdio.h>

int main()
{
    float marks;
    
    printf("Enter your marks: ");
    scanf("%f", &marks);

    if(marks<0 || marks>100)
    {
        printf("Invalid marks. Please enter a value between 0 to 100");
        return 1;
    }

    if(marks>=80)
    {
        printf("Grade Point: 4.00, Letter Grade: A+");
    }

    else if(marks>=75)
    {
        printf("Grade Point: 3.75, Letter Grade: A");
    }

    else if(marks>=70)
    {
        printf("Grade Point: 3.50, Letter Grade: A-");
    }

    else if(marks>=65)
    {
        printf("Grade Point: 3.25, Letter Grade: B+");
    }

    else if(marks>=60)
    {
        printf("Grade Point: 3.00, Letter Grade: B");
    }

    else if(marks>=55)
    {
        printf("Grade Point: 2.75, Letter Grade: B-");
    }

    else if(marks>=50)
    {
        printf("Grade Point: 2.50, Letter Grade: C+");
    }

    else if(marks>=45)
    {
        printf("Grade Point: 2.25, Letter Grade: C");
    }

    else if(marks>=40)
    {
        printf("Grade Point: 2.00, Letter Grade: D");
    }

    else
    {
        printf("Grade Point: 0.00, Letter Grade: F");
    }

    return 0;
}