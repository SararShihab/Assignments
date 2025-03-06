#include <stdio.h>

struct student
{
    int id;
    char name[50];
    int mark;
    char dob[20];
    int phn[11];
};

int main()
{
    int n;
    struct student s[n];
    printf("Enter student number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("Enter the details for student %d: \n", i);
        printf("Enter id: ");
        scanf("%d", &s[i].id);
        getchar();
        printf("\nEnter name: ");
        gets(s[i].name);
        printf("\nEnter marks: ");
        scanf("%d", &s[i].mark);
        getchar();
        printf("\nEnter DOB: ");
        gets(s[i].dob);
        printf("\nEnter Phone Number: ");
        gets(s[i].phn);
    }
    for (int i = 1; i <= n; i++)
    {
        printf("\nStudent %d Details: \n\n", i);
        printf("ID: %d\tName: %s\tMarks: %d\tDOB: %s\tPhone Number: %s", s[i].id, s[i].name, s[i].mark, s[i].dob, s[i].phn);
    }

    return 0;
}