// Create chars.txt and write uppercase letters into it

#include <stdio.h>

void main()
{
  FILE * fp;
  int ch;

        fp = fopen("chars.txt","at");  // create text file(t) to write(w)

        for(ch=97; ch <= 122; ch ++)
            fputc(ch,fp); // write a char

        fclose(fp);
}
