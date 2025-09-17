#include<stdio.h>
#include<math.h>
int main()
{
    int row;
    printf("Ente row: ");
    scanf("%d", &row);
    for (int i = 1; i <= row ; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        
    }
    return 0;
    
}