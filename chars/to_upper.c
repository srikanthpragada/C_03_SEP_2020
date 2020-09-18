// Convert given char to uppercase

#include <stdio.h>

void main()
{
  char ch;

      printf("Enter char :");
      ch = getchar();

      if (islower(ch))
           ch -= 32;

      putchar(ch);
}
