# include <stdio.h>

void print(int a[], int len)
{
 int i;

    for(i=0; i < len; i ++)
        printf("%d ", a[i]);
}

void main()
{
  int arr[] = {1,2,3,4,5};
  int marks [] = {50,60,77,86,55,88,99,77,66,54};

     print(arr,5);
     printf("\n");
     print(marks,10);

}
