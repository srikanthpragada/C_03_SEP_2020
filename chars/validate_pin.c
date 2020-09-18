// Count uppercase and lowercase letters

#include <stdio.h>

void main()
{
  char ch,i,valid = 1;

      printf("Enter 4 digit pin :");
      for(i = 1; i <= 4; i ++)
      {
        ch = getch();
        putch('*');
        if(!isdigit(ch))
        {
            valid = 0;
            break;
        }
      }

      if(valid)
         printf("\nSuccess!");
      else
         printf("\nInvalid Pin");
}
