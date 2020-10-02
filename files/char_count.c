// Accept a file from user and display how many uppercase, lowercase, digits and other chars are present

#include <stdio.h>

void main()
{
  FILE * fp;
  char filename[50];
  int ch, upper, lower, digits, others;

        printf("Enter filename :");
        gets(filename);

        fp = fopen(filename,"rt");
        if(fp == NULL)  // open failed
        {
            printf("Sorry! Could not open file!");
            exit(1);
        }

        upper = lower = digits = others = 0;

        while(1)
        {
             ch = fgetc(fp);
             if (ch == EOF)
                break;

             if(isupper(ch))
                  upper++;
             else
                if (islower(ch))
                    lower ++;
                else
                     if(isdigit(ch))
                         digits ++;
                     else
                         others ++;
        }

        fclose(fp);

        printf("Uppercase : %d\n", upper);
        printf("Lowercase : %d\n", lower);
        printf("Digits    : %d\n", digits);
        printf("Others    : %d\n", others);
}
