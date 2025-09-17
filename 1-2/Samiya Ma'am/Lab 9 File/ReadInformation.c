#include <stdio.h>
int main()
{
    FILE *n;
    char line[100];
    n = fopen("Shihab.txt", "r");
    while (fgets(line, 100, n))
    {
        printf("%s", line);
    }
    return 0;
}