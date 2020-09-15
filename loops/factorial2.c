#include<stdio.h>
void main()
{
  int i,num,fact;
  printf("enter a number");
  scanf("%d",&num);

  fact=1;

  for(i=num;i > 1; i--)
  {
     fact=fact*i;
  }
  printf("Factorial of number is %d",fact);

}
