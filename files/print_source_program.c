// Accept a file from user and display file with line numbers
#include <stdio.h>

void main()
{
  FILE * fp;
  char filename[50], line[100];
  char * cp;
  int lineno = 1;

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
            cp = fgets(line,100,fp);
            if (cp == NULL)   // reached EOF
                break;

            printf("%3d: %s", lineno,line);
            lineno ++;
        }

        fclose(fp);


}
