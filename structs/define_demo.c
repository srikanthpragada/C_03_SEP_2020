
#define SIZE 20
#define min(a,b)  a < b ? a : b

void main()
{
  int a[SIZE];
  int i, x, y, small;

      small = min(x,y);

      for(i=0; i < SIZE; i ++)
         a[i] = i;


      for(i=0; i < SIZE; i ++)
         printf("%d ", a[i]);


}
