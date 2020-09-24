// Print each word on a separate line

void main()
{
  char st[100] = "Programming is fine";
  int i;

    for(i=0; st[i] != '\0'; i++)
    {
       if(isspace(st[i]))
          putch('\n');
       else
          putch(st[i]);
    }
}
