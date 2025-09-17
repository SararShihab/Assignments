#include<stdio.h>
int main()
{
    int x[2] = {5,7};
    int *p=&x[0];
    
    
    // printf("%d\n", *p);
    // printf("%d\n", p);
    printf("%d\n", *++p);
    printf("%d", *p);
    return 0;
}