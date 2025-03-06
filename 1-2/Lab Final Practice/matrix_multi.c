#include<stdio.h>
int main()
{
    int r1, c1, r2, c2;
    printf("Enter the dimensions of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the dimensions of second matrix: ");
    scanf("%d %d", &r2, &c2);
    if (c1!=r2)
    {
        printf("Not eligable for multiplication.");
    }
    else
    {
        int A[r1][c1], B[r2][c2], rslt[r1][c2];
        printf("Enter the elements of first matrix: ");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                scanf("%d", &A[i][j]);
            }
            
        }
        printf("Enter the elements of second matrix: ");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                scanf("%d", &B[i][j]);
            }
            
        }

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                rslt[i][j]=0;
                for (int k = 0; k < c1; k++)
                {
                    rslt[i][j]+=A[i][k]*B[k][j];
                }
                
            }
            
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d ", rslt[i][j]);
            }
            printf("\n");
            
        }
        
        
    }
    return 0;
    
}