// Accept names from user and write them into names.txt

#include <stdio.h>

void main()
{
  FILE * fp;
  char name[20];

        fp = fopen("names.txt","at");
        if(fp == NULL)  // open failed
        {
            printf("Sorry! Could not open file!");
            exit(1);
        }

        while(1)
        {
            printf("Enter name [end to stop] :");
            gets(name);
            if (stricmp(name,"end") == 0)
                  break;
            fprintf(fp,"%s\n",name); // write to file
        }

        fclose(fp);
}
