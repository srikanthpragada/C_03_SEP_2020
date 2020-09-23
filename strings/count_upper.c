
void main()
{
  char st[20];
  int i,count=0;

     printf("Enter a string:");
     gets(st);

     for(i=0; st[i] != '\0' ; i++)
     {
          if(isupper(st[i]))
              count ++;
     }

     printf("No. of uppercase letters = %d", count);
}
