// Average of 5 numbers

#include<stdio.h>

void main ()
{
 int i,sum=0,num;

  for (i=1; i <= 5; i ++)
  {
    printf("Enter a number :");
    scanf("%d",&num);
    sum += num;
  }
  printf("Average :  %d", sum / 5);
}
