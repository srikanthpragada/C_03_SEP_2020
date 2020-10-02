// Take marks from marks.txt and dispaly highest, lowest and average marks

#include <stdio.h>

void main()
{
  FILE * fp;
  char line[10];
  char * cp;
  int count=0, marks, total = 0, lowest = 100, highest = 0;

        fp = fopen("marks.txt","rt");
        if(fp == NULL)  // open failed
        {
            printf("Sorry! Could not open file!");
            exit(1);
        }

        while(1)
        {
            cp = fgets(line,10,fp);
            if (cp == NULL)   // reached EOF
                break;

            marks = atoi(line); // convert string to int

            if (marks == 0)
                continue;

            if (marks > highest)
                  highest = marks;

            if (marks < lowest)
                  lowest = marks;

            total += marks;
            count ++;
        }

        fclose(fp);
        printf("Highest   : %d\n", highest);
        printf("Lowest    : %d\n", lowest);
        printf("Average   : %.2f", (float) total / count);

}
