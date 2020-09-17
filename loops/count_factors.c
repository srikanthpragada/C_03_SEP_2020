// Count factors

#include<stdio.h>

void main()
{
  int i, num,count = 0;

    printf("Enter a number : ");
    scanf("%d",&num);

    for(i = 2 ; i <= num/2 ; i++)
    {
       if(num % i == 0)
            count ++;
    }

    printf("Count = %d",count);

 }
