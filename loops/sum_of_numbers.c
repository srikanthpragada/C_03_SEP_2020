// Accept numbers until user enters 0

#include<stdio.h>

void main ()
{
 int i,sum=0,num;

  while(1)
  {
    printf("Enter a number [0 to stop]:");
    scanf("%d",&num);

    if(num == 0)
        break;

    sum += num;
  }
  printf("Sum  :  %d", sum);
}
