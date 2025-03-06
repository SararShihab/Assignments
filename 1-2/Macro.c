#include<stdio.h>

#define MAX(x,y) (x>y?x:y)
#define MIN(x,y) (x<y?x:y)

int main()
{
    int x=5, y=10;
    printf("Maximum: %d\n", MAX(x,y));
    printf("Minimum: %d", MIN(x,y));
    return 0;
}