# include <stdio.h>

// user-defined function
void print_reverse(int num)
{
    while(num > 0)
    {
        printf("%d", num % 10);
        num /= 10;
    }
}

void main()
{
     // print_reverse(345);
}
