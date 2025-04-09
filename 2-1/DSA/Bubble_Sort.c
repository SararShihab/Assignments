#include<stdio.h>
int main()
{
    int n, a[] = {55, 66, 22, 88, 11, 44, 33, 77};
    n=sizeof(a)/4;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; i < (n-1)-i; i++)
        {
            if (a[j]<a[j+1])
            {
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }

        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
    
}