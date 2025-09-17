#include<stdio.h>
int main()
{
    int x = 1;
    long int y = x;
    printf("%d %d %d", sizeof(x), sizeof(y), sizeof(short int));
    return 0;
}