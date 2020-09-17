// Prime number

#include<stdio.h>

void main()
{
  int i, num, prime = 1;

    printf("Enter a number : ");
    scanf("%d" ,&num );

    for(i = 2 ; i <= num/2 ; i++)
    {
       if(num % i == 0)
       {
           printf("Not a prime number!");
           prime = 0; // false
           break;
       }
    }

    if (prime)
       printf("Prime Number!");

 }
