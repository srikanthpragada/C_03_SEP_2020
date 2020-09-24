// Biggest name

void main()
{
  char names[][20] = {"Bill","Larry","James","Joe","Richards","Ricardo","James","Mike"};
  char largest[20] = "";  // Empty string
  int i;


    for(i=0; i < 8 ; i++)
    {
       if (strcmp(names[i],largest) > 0)
           strcpy(largest,names[i]);
    }

    puts(largest);
}
