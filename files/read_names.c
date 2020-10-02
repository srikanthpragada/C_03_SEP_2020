// Read contents of names.txt and display on the screen

#include <stdio.h>

void main()
{
  FILE * fp;
  char name[20];
  int ch;

        fp = fopen("names.txt","rt");
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
