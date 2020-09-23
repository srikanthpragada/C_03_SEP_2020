
void main()
{
  char name[20];
  int i;

     printf("Enter your name :");
     gets(name);

     for(i=0; name[i] != '\0' ; i++)
     {
         printf("%c  %d\n", name[i], name[i]);
     }
}
