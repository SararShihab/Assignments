#include<stdio.h>

int main()
{
    float BasicSalary, GrossSalary, HRA, DA;

    printf("Enter Basic Salary: ");
    scanf("%f", &BasicSalary);

    if(BasicSalary<=10000)
    {
        HRA = BasicSalary * 0.2;
        DA = BasicSalary * 0.8;
    }
    else if(BasicSalary<=20000)
    {
        HRA = BasicSalary * 0.25;
        DA = BasicSalary * 0.9;
    }
    else
    {
        HRA = BasicSalary * 0.3;
        DA = BasicSalary * 0.95;
    }

    GrossSalary = BasicSalary + HRA + DA;

    printf("\nGross Salary: %0.3f", GrossSalary);

    return 0;
}