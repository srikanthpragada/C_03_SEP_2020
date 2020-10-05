// Read details of a product from products.dat based on record number (position)

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
  int pos;
  int count;

        // open file
        fp = fopen("products.dat","rb");
        if (fp == NULL)
        {
           printf("Sorry! Could not open file!");
           exit(1);
        }

        printf("Enter record number :");
        scanf("%d",&pos);

        fseek(fp, (pos - 1) * sizeof(struct product), SEEK_SET); // position file pointer
        count = fread(&product, sizeof(struct product), 1, fp);  // read a record
        if(count == 0)
            printf("Sorry! Record not found!");
        else
            printf("%-30s  %8d\n", product.name, product.price);

        fclose(fp);
}
