// Print files (provided from command line) with line numbers

#include <stdio.h>

void main(int argc, char * argv[])
{
 FILE * fp;
 char line[200];
 int i, lineno;


      for(i=1; i < argc; i ++)
      {
         fp = fopen(argv[i],"rt");
         if (fp == NULL)
         {
            printf("\n**** %s not found! ****\n", argv[i]);
            continue;
         }

         printf("\n\n**** %s ****\n", argv[i]);

         lineno = 1;
         while(1)
         {
             if ( fgets(line,200,fp) == NULL)
                  break;

             printf("%04d:%s", lineno, line);
             lineno ++;
         } // while

         fclose(fp);
      } // for


}
