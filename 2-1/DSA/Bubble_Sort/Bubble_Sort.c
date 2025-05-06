#include<stdio.h>

void printArray(int a[], int n)
{
    printf("Sorted Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void bubbleSort(int a[], int n)
{
    
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                
            }
        }
        
    }
    printArray(a, n);
}

int main()
{
    int a[] = {78, 55, 34, 90, 64, 37, 59, 85};
    // int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(int);
    bubbleSort(a, n);
    return 0;
}