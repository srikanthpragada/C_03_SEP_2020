# include <stdio.h>

void zero(int * v)
{
    *v = 0;
}

void main()
{
  int n=10;

      zero(&n);
      printf("%d ",n);
}
