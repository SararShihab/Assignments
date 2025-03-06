#include<stdio.h>
#include<math.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i==3)
        {
            continue;
        }
        int x=pow(5,i);
        printf("%d ", x);
    }
    return 0;
}