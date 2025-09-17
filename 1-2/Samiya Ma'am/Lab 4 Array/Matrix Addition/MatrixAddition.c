#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter the dimansions of two matrices: ");
    scanf("%d %d", &x, &y);
    int A[x][y], B[x][y], C[x][y];

    printf("Enter the elements of Matrix 'A': ");

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d", &A[i][j]);
        } 
    }
    printf("Enter the elements of Matrix 'B': ");
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d", &B[i][j]);
        } 
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        } 
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ", C[i][j]);
        } 
        printf("\n");
    }
    return 0;
    
}