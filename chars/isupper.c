#include <stdio.h>

void main()
{
  char ch;

      printf("Enter char :");
      ch = getch();

      if (ch >= 'A' && ch <= 'Z')
          printf("\nUppercase!");
      else
          printf("\nNot uppercase!");
}
