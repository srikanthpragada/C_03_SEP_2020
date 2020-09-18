// Print numbers sequence

#include <stdio.h>

main()
{
  int i,j, n = 1;


      for(i=1; i <= 5; i ++)
      {
          for(j=1; j <= 5; j ++)
          {
             printf("%5d",n++);
          }
          putch('\n');  // go to next line
      }
}
