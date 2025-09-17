#include<stdio.h>

struct company
{
    char name[80];
    char address[150];
    char phone[11];
    int noOfEmployee;
};

int main()
{
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct company c[n];
    printf("\nEnter details:\n\n");
    for (int i = 0; i < n; i++)
    {
        while (getchar()!='\n');

        printf("Employee %d:\n", i+1);
        printf("\tName: ");
        gets(c[i].name);
        printf("\tAddress: ");
        gets(c[i].address);
        printf("\tPhone number: ");
        gets(c[i].phone);
        printf("\tNo of employees in their team: ");
        scanf("%d", &c[i].noOfEmployee);

    }
    printf("\n--- Employee Details ---\n");
    for (int i = 0; i < n; i++)
    {
        printf("Employee %d:\n\tName: %s\n\tAddress: %s\n\tPhone: %s\n\tNo of employees in their team: %d\n", i + 1, c[i].name, c[i].address, c[i].phone, c[i].noOfEmployee);
    }

    return 0;
}
