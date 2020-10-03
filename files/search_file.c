// Accept a file and a string from user and display lines that contain the given string
#include <stdio.h>

void main()
{
  FILE * fp;
  char filename[50], line[100], s[20];
  char * cp;
  int lineno = 1;

        printf("Enter filename :");
        gets(filename);

        printf("Enter string   :");
        gets(s);

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

            if (strstr(line,s) != NULL)  // s is found in line
                printf("%s",line);
        }
        fclose(fp);
}
