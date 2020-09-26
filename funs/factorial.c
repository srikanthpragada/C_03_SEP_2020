
int factorial(int num)
{
  int fact = 1,i;

    for(i = 2; i <= num ; i ++)
         fact *= i;

    return fact;
}

void main()
{
 int n = 5, fact;

      fact = factorial(n);
      printf("%d ", fact);
}
