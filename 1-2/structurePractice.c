#include <stdio.h>

struct student
{
    int roll;
    char name[100];
    float marks;
};

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student s[n];
    printf("Enter Student Details: ");
    for (int i = 0; i < n; i++)
    {
        while (getchar() != '\n')
            ;
        printf("\n\nStudent %d\n", i + 1);
        printf("\n\tName: ");
        gets(s[i].name);
        printf("\n\tRoll: ");
        scanf("%d", &s[i].roll);
        printf("\n\tMarks: ");
        scanf("%f", &s[i].marks);
    }
    printf("\n\nStudent Details: \n\n");
    for (int i = 0; i < n; i++)
    {
        printf("Student %d\n", i + 1);
        printf("\tRoll: %d\n", s[i].roll);
        printf("\tName: %s\n", s[i].name);
        printf("\tMarks: %f\n", s[i].marks);
    }

    return 0;
}