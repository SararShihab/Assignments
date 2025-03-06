#include<stdio.h>
int main()
{
    FILE *f;
    int n, num;
    printf("How many numbers you want to read? ");
    scanf("%d", &n);
    f=fopen("Numbers.txt", "r");
    if (f==NULL)
    {
        printf("Error Opening File");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (fscanf(f, "%d", &num)!=1)
        {
            printf("Insufficient Numbers.");
        }
        printf("%d ", num);
        
    }
    fclose(f);
    return 0;
    
}