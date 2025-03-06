#include <stdio.h>
int main()
{
    char name[20];
    printf("Enter the name of the file with extension: ");
    gets(name);

    FILE *n;
    n = fopen(name, "w");
    fprintf(n, "This is the content of the file Shihab.txt");
    if (n == NULL)
    {
        printf("The file does not exist of could not be created.");
    }
    else
    {
        printf("The file Shihab.txt created successfully...!! ");
    }
    fclose(n);

    return 0;
}