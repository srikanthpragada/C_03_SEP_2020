#include <stdio.h>

void main()
{
  int marks, subject, passmarks;

     printf("Enter subject [1-5] :");
     scanf("%d",&subject);

     printf("Enter marks         :");
     scanf("%d",&marks);

     switch(subject)
     {
        case 1:
        case 2: passmarks = 50;
                break;
        case 3: passmarks = 60;
                break;
        case 4: passmarks = 65;
                break;
        default:passmarks = 35;
     }

     if (marks >= passmarks)
        printf("Passed");
     else
        printf("Failed");
}
