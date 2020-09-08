// Calculate area of a circle

#include <stdio.h>

void main()
{
   float radius, area, pi;

       printf("Enter radius :");
       scanf("%f", &radius);
       pi = 22 / 7.0;
       area =  pi * (radius * radius);
       printf("Area = %f", area);
}
