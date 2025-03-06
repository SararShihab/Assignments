#include <stdio.h>

int main() 
{
  int decimal;
  printf("Enter a decimal number: ");
  scanf("%d", &decimal);
  printf("The octal equivalent of '%d' is %o", decimal, decimal);
  return 0;
}