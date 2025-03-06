#include<stdio.h>
int main()
{
    int i=sizeof(int);
    int f=sizeof(float);
    int d=sizeof(double);
    int c=sizeof(char);
    printf("Size of integer is %d bit.\n", i);
    printf("Size of float is %d bit.\n", f);
    printf("Size of double is %d bit.\n", d);
    printf("Size of character is %d bit.", c);
    return 0;
}