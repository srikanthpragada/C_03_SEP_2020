// Take marks from marks.txt and display only those marks that are greater than average
#include <stdio.h>

struct node
{
    int marks;
    struct node * next;
};

main()
{
  struct node *root = NULL, *cur, *prev;
  int marks, sum=0, count=0, avg;
  char line[10];
  FILE  * fp;

  fp = fopen("marks.txt","rt");
  if(fp == NULL)
  {
      printf("Sorry! File cannot be opened!");
      exit(1);
  }

  while(1)
  {
      if (fgets(line,10,fp) == NULL)  // Did we reach EOF
         break;

      // create new node
      cur = (struct node *) malloc(sizeof(struct node));
      if(cur == NULL)
      {
          printf("Memory Error!");
          exit(2);
      }

      cur->marks = atoi(line); // Convert string to int
      cur->next = NULL;
      sum += cur->marks;
      count ++;

      if(root == NULL) // Is this node first node?
         root = cur;
      else
         prev->next = cur;

      prev = cur;
  }

  avg = sum / count;
  // print marks greater than average
  cur = root;
  while (cur != NULL)
  {
     if(cur-> marks > avg)
         printf("%d ", cur->marks);

     cur = cur->next;
  }

} // main()
