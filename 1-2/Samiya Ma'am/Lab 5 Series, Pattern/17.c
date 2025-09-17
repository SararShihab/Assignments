#include<stdio.h>
int main()
{
    int row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row-i; j++)
        {
            printf(" ");
        }
        int value =1;
        for (int k = 1; k <= i; k++)
        {
            printf("%d ", value);
            value=(value*(i-k))/k;
        }
        printf("\n");
        
    }
    return 0;
    
}