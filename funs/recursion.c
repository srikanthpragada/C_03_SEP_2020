
int factorial(int n)
{
     if(n == 1)
       return 1;

     return n * factorial(n-1);
}

void reverse(int n)
{
     if(n > 0)
     {
        printf("%d", n % 10);
        reverse(n/10);
     }
}

void reverse_number(int n)
{
     if(n > 0)
     {
        printf("%d ",n);
        reverse_number(n-1);
     }
}

// non-recursive
void print_reverse(int n)
{
     while(n > 0)
     {
        printf("%d", n % 10);
        n /= 10;
     }
}

void main()
{

    print_reverse(125);
    printf("\n");
    reverse(345);
    printf("\n");
    reverse_number(10);
    printf("Factorial  of 4 :%d", factorial(4));
}
