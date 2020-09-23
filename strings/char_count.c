
void main()
{
  char st[20], ch;
  int i, count = 0;

     printf("Enter a string :");
     gets(st);

     printf("Enter a char   :");
     ch = getchar();

     for(i=0; st[i] != '\0' ; i++)
     {
           if(st[i] == ch)
              count ++;
     }

     printf("Count = %d", count);
}
