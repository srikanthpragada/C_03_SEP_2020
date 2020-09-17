// Print numbers sequence

#include <stdio.h>

main()
{
  int i,j, num, org_num, digit, total = 0, fact;

      printf("Enter a number :");
      scanf("%d",&num);

      org_num = num;  // preserve number

      while(num > 0)
      {
          digit = num % 10;  // take rightmost digit

          // calculate factorial of digit
          fact = 1;
          for(i = 2; i <= digit; i ++)
              fact = fact * i;

          total += fact;
          num  /= 10;        // remove rightmost digit
      }

      if (total == org_num)
           printf("Strong number!");
      else
           printf("Not a strong number!");
}
