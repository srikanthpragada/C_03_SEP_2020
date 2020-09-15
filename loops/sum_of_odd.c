// Sum of odd numbers between 50 and 100

#include<stdio.h>

void main ()
{
 int i,sum=0, start, end;

  printf("Enter start and end number :");
  scanf("%d%d",&start,&end);

  for (i=start; i <= end; i ++)
  {
     if(i % 2 == 1)
        sum = sum + i;
  }
  printf("The sum of odd numbers is : %d", sum );
}
