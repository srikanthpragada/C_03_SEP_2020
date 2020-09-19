// Take marks and print marks  that are >= 50

#include <stdio.h>

void main()
{
 int a[10];
 int i;

      srand(time(0)); // Initialize random seed

      for(i=0; i < 10;i ++)
      {
        a[i] = rand() % 100;
      }

      for(i=0; i < 10; i ++)
      {
        if(a[i] >= 50)
           printf("%5d - %5d\n", i + 1, a[i]);
      }
}
