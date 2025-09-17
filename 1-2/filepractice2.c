#include<stdio.h>
int main()
{
    FILE *n;
    char line[500];
    n = fopen("Test.txt", "r");
    printf("File Data: \n");
    while (fgets(line, 500, n))
    {
        printf("%s", line);
    }
    fclose(n);
    return 0;
}