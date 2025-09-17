#include<stdio.h>
int main()
{
    int a, b, reversed=0;
    

    int ini,last, count=0;

    printf("Enter the initial and last number: ");
    scanf("%d %d", &ini, &last);

    

    for (int i = ini; i <= last; i++)
    { 
        a=i;
        b=i;
        while (a!=0)
    {
        reversed=(reversed*10)+(a%10);
        a/=10;
    }
        if(reversed==b)
        {
            count++;
        }
    }
    
    

    
    
    printf("%d", count);

    return 0;
    
}