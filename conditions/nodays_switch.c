// Display no. of days in the given month

#include <stdio.h>

void main()
{
  int month,nodays,year;

      printf("Enter month number [1-12] :");
      scanf("%d",&month);

      switch(month)
      {
          case 2:
                   printf("Enter year : ");
                   scanf("%d",&year);
                   if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
                       nodays = 29;
                   else
                       nodays = 28;
                   // break;
          case 4:
          case 6:
          case 9:
          case 11: nodays = 30;
                   break;
          default: nodays = 31;
      }
      printf("No. of days = %d", nodays);
}
