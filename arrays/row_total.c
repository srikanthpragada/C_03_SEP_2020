#include <stdio.h>

main()
{
  int a[5][5];
  int r,c, total=0;

      srand(time(0));

      for(r=0; r<5; r++)
      {
         total = 0;
         for(c=0; c<5; c++)
         {
            a[r][c] = rand() % 10;
            total += a[r][c];
            printf("%5d", a[r][c]);
         }
         printf("%5d\n",total);
      }
}
