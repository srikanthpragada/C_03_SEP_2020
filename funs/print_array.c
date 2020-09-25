# include <stdio.h>


void print_array(int a[10])
{
 int i;

     for(i=0; i < 10; i ++)
        printf("%d ",a[i]);
}

void main()
{
     int a[10] = {1,4,5,6,7,8,9,10,20,40};

        print_array(a);
}
