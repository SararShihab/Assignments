#include<stdio.h>

int main()
{
    float unit, basicBill;

    printf("Enter Unit: ");
    scanf("%f", &unit);

    if(unit>250)
    {
        basicBill = (50 * 0.2)+(100*0.75)+(100*1.20)+((unit-250)*1.50);

    }
    else if(unit>150)
    {
        basicBill = (50 * 0.2)+(100*0.75)+((unit-150)*1.20);
       
    }
    else if(unit>50)
    {
        basicBill = (50 * 0.2)+((unit-50)*0.75);
    }
    else
    {
        basicBill = (unit * 0.2);
    }

    printf("\nBill: %0.3f", basicBill+(basicBill*0.2));

    return 0;
}