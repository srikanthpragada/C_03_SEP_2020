// Print numbers sequence

#include <stdio.h>

main()
{
  int i,j;


      for(i=1; i <= 5; i ++)
      {
          for(j=1; j <= i; j ++)
          {
             printf("%d",j);
          }
          putch('\n');  // go to next line
      }
}
