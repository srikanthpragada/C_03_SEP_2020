#include <stdio.h>
#define SIZE 10

main()
{
  int a[SIZE][SIZE];
  int r,c;

      for(r=0; r<SIZE; r++)
      {
         for(c=0; c<SIZE; c++)
         {
            if(r == c)
                a[r][c] = 1;
            else
                a[r][c] = 0;

            printf("%5d", a[r][c]);
         }
         printf("\n");
      }
}
