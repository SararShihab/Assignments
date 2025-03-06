#include<stdio.h>

int main ()
{
    int day, month, year;
    printf("Enter a date in DD-MM-YYYY format: ");
    scanf("%d-%d-%d", &day, &month, &year);
    printf("Day:%d \nMonth:%d \nYear:%d", day, month, year);
    return 0;
}