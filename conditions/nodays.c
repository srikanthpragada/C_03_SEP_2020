// Display no. of days in the given month


#include <stdio.h>

void main()
{
  int month,nodays;

      printf("Enter month number [1-12] :");
      scanf("%d",&month);

      if (month == 2)
          nodays = 28;
      else
         if(month == 4 || month == 6 || month == 9 || month == 11)
             nodays = 30;
         else
             nodays = 31;


      printf("No. of days = %d", nodays);
}
