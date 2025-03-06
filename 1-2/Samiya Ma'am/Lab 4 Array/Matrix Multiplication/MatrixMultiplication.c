#include <stdio.h>

int main() 
{
    int rows1, cols1, rows2, cols2;

    printf("Enter the dimension of matrix A: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter the dimension of matrix B: ");
    scanf("%d %d", &rows2, &cols2);

    
    if (cols1 != rows2)
    {
        printf("The dimensions isn't eligable for multiplication.\n");
    }
    else
    {
        int A[rows1][cols1], B[rows2][cols2], result[rows1][cols2];
    
        printf("Enter the elements of matrix A:\n");
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols1; j++) {
                scanf("%d", &A[i][j]);
            }
        }

    
        printf("Enter the elements of matrix B:\n");
        for (int i = 0; i < rows2; i++)
        {
            for (int j = 0; j < cols2; j++)
            {
                scanf("%d", &B[i][j]);
            }
        }

    
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols2; j++)
            {
                result[i][j] = 0;
                for (int k = 0; k < cols1; k++)
                {
                    result[i][j] += A[i][k] * B[k][j];
                }
            }
        }

    
        printf("The product of the two matrices is:\n");
            for (int i = 0; i < rows1; i++)
            {
                for (int j = 0; j < cols2; j++)
                {
                    printf("%d ", result[i][j]);
                }
            printf("\n");
            }
    }
    return 0;
}