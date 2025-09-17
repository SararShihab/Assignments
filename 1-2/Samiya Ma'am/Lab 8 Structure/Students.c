#include <stdio.h>

struct student
{
    char name[100];
    int roll;
    float marks;
};

int main()
{
    int n;
    printf("Enter student number: ");
    scanf("%d", &n);
    struct student s[n];

    for (int i = 0; i < n; i++)
    {
        while (getchar() != '\n')
            ;
        printf("Student %d:\n", i + 1);
        printf("\tEnter name: ");
        gets(s[i].name);
        printf("\tEnter roll: ");
        scanf("%d", &s[i].roll);
        printf("\tEnter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("\nStudent details: \n\n");
    for (int i = 0; i < n; i++)
    {
        printf("Student %d:\n\tName: %s\n\tRoll: %d\n\tMarks: %0.2f\n", i + 1, s[i].name, s[i].roll, s[i].marks);
    }
    return 0;
}
