// Take marks and print marks  that are >= 50

#include <stdio.h>

void main()
{
 int a[10];
 int i;

      for(i=0; i < 10;i ++)
      {
        printf("Enter marks for student %d :",i+1);
        scanf("%d",&a[i]);
      }

      for(i=0; i < 10; i ++)
      {
        if(a[i] >= 50)
           printf("%5d - %5d\n", i + 1, a[i]);
      }
}
