// Validate password entered by user. Password must have at least 1 digit and 1 uppercase

#include <stdio.h>

void main()
{
  char ch,i,digit = 0,upper = 0;

      printf("Enter password (must have 1 digit, 1 uppercase and total 8) :");
      for(i = 1; i <= 8; i ++)
      {
        ch = getch();
        putch('*');

        if(isdigit(ch))
            digit = 1;
        else
            if(isupper(ch))
               upper = 1;
      }

      if(digit && upper)
         printf("\nValid Password!");
      else
         printf("\nInvalid Password!");
}
