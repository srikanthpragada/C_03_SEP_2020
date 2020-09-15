// Display common factors of two numbers

#include<stdio.h>

void main ()
{
int num1,num2,i, end;

  num1 = 144;
  num2 = 120;
  end =  num1 < num2 ? num1 / 2 : num2 / 2;

  for(i = 2; i <= end ; i ++)
  {
      if (num1 % i == 0 && num2 % i == 0)
          printf("%d\n",i);
  }

}
