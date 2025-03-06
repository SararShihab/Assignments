#include<stdio.h>
int main()
{
    int n, max, min, arr[100];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max=min=arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        if (arr[i]<min)
        {
            min=arr[i];
        }
         
    }
    printf("max = %d\n", max);
    printf("min = %d", min);
    return 0;
}