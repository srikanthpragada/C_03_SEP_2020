// Display net price after 20% discount

#include <stdio.h>

void main()
{
   int amount, discount, netamount;

       printf("Enter amount :");
       scanf("%d", &amount);

       discount = amount * 20 / 100 ;
       netamount = amount - discount;

       printf("Net Amount : %d", netamount);
}
