// Accept 5 marks and display highest marks

#include<stdio.h>

void main()
{
  int i, marks, highest = 0;

    for(i = 1 ; i <= 5 ; i++)
    {
        printf("Enter marks : ");
        scanf("%d",&marks);

        if(marks > highest)
               highest = marks;
    }

    printf("Highest marks = %d",highest);

 }
