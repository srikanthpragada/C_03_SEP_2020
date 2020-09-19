#include<stdio.h>

void main ()
{
  int a[10] ;
  int i ;

  srand(time(0));

  for(i=0; i < 10;i++)
  {
    a[i] = rand() % 100 ;
  }

  for(i=0; i < 10;i ++ )
  {
    if(a[i] % 2 == 0)
      printf("%5d", a[i]);
  }

  for(i=0; i < 10 ;i ++)
  {
    if(a[i] % 2 != 0)
      printf("%5d", a[i]);
  }

}
