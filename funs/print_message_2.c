# include <stdio.h>

// user-defined function
void print_line(int len, char ch)
{
 int i;

     for(i=1; i <= len; i ++)
         putch(ch);
}

void main()
{
     print_line(10,'-');  // call function
     printf("\nWelcome\n");
     print_line(10,'*');
}
