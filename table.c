// program to take a number and print table

#include <stdio.h>

void main(int argc, char * argv[])
{
  int num,i, len = 10;

    if (argc < 2)
    {
       printf("Sorry! Number is missing!");
       exit(0);
    }

    if(argc > 2)
       len = atoi(argv[2]);

    num = atoi(argv[1]);   // Convert string to int

    for(i=1; i <= len; i ++)
    {
       printf("%2d * %4d = %6d\n", i,num, i * num);
    }
}
