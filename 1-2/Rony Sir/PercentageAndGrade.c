#include<stdio.h>

int main()
{
    int phy, chem, bio, math, computer;
    float total, percentage;
    char grade;

    printf("Enter marks for Physics: ");
    scanf("%d", &phy);

    printf("Enter marks for Chemistry: ");
    scanf("%d", &chem);

    printf("Enter marks for Biology: ");
    scanf("%d", &bio);

    printf("Enter marks for Mathematics: ");
    scanf("%d", &math);

    printf("Enter marks for Computer: ");
    scanf("%d", &computer);

    total = phy + chem + bio + math + computer;

    percentage = (total/500)*100;

    if(percentage>=90)
    {
        grade = 'A';
    }
    else if(percentage>=80)
    {
        grade = 'B';
    }
    else if(percentage>=70)
    {
        grade = 'C';
    }
    else if(percentage>=60)
    {
        grade = 'D';
    }
    else if(percentage>=40)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }
    
    printf("\n Total Marks: %0.3f \n", total);
    printf("\n Percentage: %0.3f \n", percentage);
    printf("\n Grade: %c\n", grade);

    return 0;
}