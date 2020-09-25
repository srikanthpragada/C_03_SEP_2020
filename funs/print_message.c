# include <stdio.h>

// user-defined function
void print_line()
{
 int i;

     for(i=1; i <= 25; i ++)
         putch('=');
}

void main()
{
     print_line();  // call function
     printf("\nWelcome\n");
     print_line();
}
