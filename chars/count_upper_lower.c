// Count uppercase and lowercase letters

#include <stdio.h>

void main()
{
  char ch, upper, lower,i;

      upper = lower = 0;

      printf("Enter 10 chars :");
      for(i = 1; i <=10; i ++)
      {
        ch = getche();
        if (islower(ch))
           lower++;
        else
           upper++;
      }

      printf("\nUpper = %d, Lower = %d",upper,lower);
}
