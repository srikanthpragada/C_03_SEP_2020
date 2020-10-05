
// Write details of products into products.dat

#include <stdio.h>

struct product
{
   char name[30];
   int price;
};

void main()
{
  FILE * fp;
  struct product product;

        // open file
        fp = fopen("products.dat","wb");
        if (fp == NULL)
        {
           printf("Sorry! Could not open file!");
           exit(1);
        }

        while(1)
        {
           // clear keyboard buffer
           fflush(stdin);

           printf("Enter product name [end to stop] :");
           gets(product.name);

           if (strcmp(product.name,"end") == 0)
               break;

           printf("Enter product price :");
           scanf("%d",&product.price);

           fwrite(&product, sizeof(struct product), 1, fp);

        }

        fclose(fp);
}
