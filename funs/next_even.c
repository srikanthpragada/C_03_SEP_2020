int g = 100;

int largest_factor(int n)
{
 int i;
       for(i=n/2; i > 0; i --)
       {
           if (n % i == 0)
             return i;
       }
}

int iseven(int n)
{
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}

int next_even(int num)
{
    if (num % 2 == 0)
       num += 2;
    else
       num ++;

    return num;
}

void main()
{
  int n;

      n = next_even(10);
      printf("%d ", n);
      printf("%d ", next_even(15));

}
