// Read details of products from products.dat

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
  int count;

        // open file
        fp = fopen("products.dat","rb");
        if (fp == NULL)
        {
           printf("Sorry! Could not open file!");
           exit(1);
        }

        while(1)
        {
           count = fread(&product, sizeof(struct product), 1, fp);
           if (count == 0)  // EOF
              break;

           printf("%-30s  %8d\n", product.name, product.price);
        }

        fclose(fp);
}
