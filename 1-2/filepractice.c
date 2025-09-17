#include <stdio.h>
#include<string.h>
int main()
{
    FILE *n;
    char name[20], content[500], line[500];
    printf("Enter the name of the file with enxtension: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;
    n = fopen(name, "w+");
    if (n == NULL)
    {
        printf("The file could not be created or opened.");
    }
    else
    {
        printf("File created successfully.\n");
    }
    printf("Enter the text you want to insert in your file: ");
    fgets(content, sizeof(content), stdin);
    
    fprintf(n, content);
    rewind(n);
    
    printf("File Data: \n");
    while (fgets(line, 500, n))
    {
        printf("%s", line);
    }
    fclose(n);
    return 0;
}
