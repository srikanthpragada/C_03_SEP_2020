// program to take a number and print factors

#include <stdio.h>

void main(int argc, char * argv[])
{
  int num,i;

    if (argc < 2)
    {
       printf("Sorry! Number is missing!");
       exit(0);
    }

    num = atoi(argv[1]);   // Convert string to int

    for(i=2; i <= num/2; i ++)
    {
       if (num % i == 0)
          printf("%d ", i);
    }
}
