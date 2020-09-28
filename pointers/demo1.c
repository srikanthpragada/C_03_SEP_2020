# include <stdio.h>

void main()
{
  int n  = 10, v = 100;
  int * p;

      p = &n;
      printf(" %d %d\n", n, *p);
      p = &v;
      printf(" %d %d ", v, *p);
}
