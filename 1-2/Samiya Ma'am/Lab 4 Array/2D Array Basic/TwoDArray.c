#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter the dimension of the array: ");
    scanf("%d %d", &x, &y);
    int arr[x][y];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < x; i++)
    {
        for(int j=0; j<y; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The the array is:\n");
    for (int i = 0; i < x; i++)
    {
        for(int j=0; j<y; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}