// Take length and width and display area for rectangle

#include <stdio.h>

void main()
{
   int length,width,area;

   printf("Enter length :");
   scanf("%d",&length);
   printf("Enter width  :");
   scanf("%d",&width);

   area = length * width;

   printf("Area : %d", area);
 }
