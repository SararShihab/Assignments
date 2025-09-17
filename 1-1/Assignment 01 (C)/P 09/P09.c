#include <stdio.h>

int main() 
{
  char character;
  printf("Enter a character: ");
  scanf("%c", &character);
  printf("The ASCII value for '%c' is %d", character, character);
  return 0; 
}