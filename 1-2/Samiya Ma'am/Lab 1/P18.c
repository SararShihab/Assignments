#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    
    if (num < 0) {
        printf("Negative numbers are not supported for reversal.\n");
    } else {

        while (num != 0) {
            remainder = num % 10; 
            num /= 10;
            reversed = reversed * 10 + remainder; 
        }

        printf("Reversed number: %d\n", reversed);
    }

    return 0;
}
