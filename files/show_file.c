// Accept a file from user and display its contents

#include <stdio.h>

void main()
{
  FILE * fp;
  char filename[50];
  int ch;

        printf("Enter filename :");
        gets(filename);

        fp = fopen(filename,"rt");
        if(fp == NULL)  // open failed
        {
            printf("Sorry! Could not open file!");
            exit(1);
        }

        while(1)
        {
             ch = fgetc(fp);
             if (ch == EOF)
                break;

             putch(ch);
        }

        fclose(fp);
}
