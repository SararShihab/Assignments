#include<stdio.h>
int main()
{
    char name[15], content[200];
    FILE *f;
    f=fopen(name, "w");
    printf("Enter the file name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter the content: ");
    fgets(content, sizeof(content), stdin);
    
    fprintf(f, "%s", content);
    fclose(f);
    printf("Content inserted successfully..");
    
    return 0;
}