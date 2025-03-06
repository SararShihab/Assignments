#include<stdio.h>
int main()
{
    int n;

    printf("1. Arithmatic Operations\n");
    printf("2. Relational Operations\n");
    printf("3. Logical Operations\n");
    printf("4. Bitwise Operations\n");
    printf("5. Assignment Operations\n");
    printf("6. Increment/Decrement Operations\n");
    printf("7. Conditional Operations\n");
    printf("8. sizeof() Operation\n");
    printf("9. Find ASCII Value of Any Character\n");

    printf("\nChoose an option: ");
    scanf("%d", &n);

    if(n<1 || n>9)
    {
        printf("Invalid Input. Please Choose the Right Option.");
    }

    else
    {
        if (n == 1)
        {
            printf("\n\n\nAritmetic Operation:\n\n");

            int op, a, b;

            printf("Enter two integer numbers: ");
            scanf("%d %d", &a, &b);
            
            printf("\n1. Summation\n");
            printf("2. Subtraction\n");
            printf("3. Multiplication\n");
            printf("4. Divition\n");
            printf("5. Modulus\n");

            printf("\nChoose an Operation: ");
            scanf("%d", &op);

            if (op<1 || op>5)
            {
                printf("Invalid Input. Please Choose the Right Option.");
            }
            else
            {
                if (op == 1)
                {
                    printf("The sum of %d and %d is %d", a ,b, a+b);
                }
                else if (op == 2)
                {
                    printf("The subtraction of %d and %d is %d", a ,b, a-b);
                }
                else if (op == 3)
                {
                    printf("The multiplication of %d and %d is %d", a ,b, a*b);
                }
                else if (op == 4)
                {
                    printf("The divition of %d by %d is %f", a ,b, a/b);
                }
                else
                {
                    printf("The modulus of %d by %d is %d", a ,b, a%b);
                }
                
            }
            
        }
        else if (n == 2)
        {
            printf("\n\n\nRelational Operation:\n\n");
        }
        else if (n == 3)
        {
            printf("\n\n\nLogical Operation:\n\n");
        }
        else if (n == 4)
        {
            printf("\n\n\nBitwise Operation:\n\n");
        }
        else if (n == 5)
        {
            printf("\n\n\nAssignment Operation:\n\n");
        }
        else if (n == 6)
        {
            printf("\n\n\nIncrement/Decrement Operation:\n\n");
        }
        else if (n == 7)
        {
            printf("\n\n\nConditional Operation:\n\n");
        }
        else if (n == 8)
        {
            printf("\n\n\nsizeof() Operation:\n\n");
        }
        else
        {
            printf("\n\n\nFind ASCII Value of Any Character:\n\n");
        }
        
        
    }
    
    return 0;
}