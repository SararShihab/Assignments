#include <stdio.h>
int main()
{
    char ch;
    int x, y;
    printf("Menu: \n");
    printf("\tSum: s\n\tDifference: d\n\tProduct: p\n\n");
    printf("Enter your choice: ");
    scanf("%c", &ch);
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    if (ch == 's' || ch == 'd' || ch == 'p')
    {
        switch (ch)
        {
        case 's':
            printf("The sumation is %d", x + y);
            break;
        case 'd':
            printf("The difference is %d", x - y);
            break;
        default:
            printf("The product is %d", x * y);
            break;
        }
    }
    else
    {
        printf("Envalid input.");
    }

    return 0;
}