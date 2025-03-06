#include<stdio.h>

int main()
{
    int day, month, year;
    printf("Enter a date in any following format: \n a. DD-MM-YYYY \n b. DD/MM/YYYY \n c. DD MM YYYY \n d. DD,MM,YYYY \n");
    scanf("%d%*[-/ ,]%d%*[-/ ,]%d", &day, &month, &year);
    printf("Day:%d \nMonth:%d \nYear:%d", day, month, year);
    return 0;
}