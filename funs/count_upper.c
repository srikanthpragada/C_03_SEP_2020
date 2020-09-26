
int count_upper(char s[100])
{
  int count = 0,i;

    for(i = 0; s[i] != '\0' ; i ++)
         if(isupper(s[i]))
            count ++;

    return count;
}

void main()
{
 int upper;
 char s[] = "How do you DO?";

      upper = count_upper(s);

      if (upper > 0)
        printf("%d uppercase letters found", upper);
      else
        printf("Uppercase not found!");

      printf("\nNo. of words : %d ", count_words(s));
}

int count_words(char s[100])
{
  int count = 0,i;

    for(i = 0; s[i] != '\0' ; i ++)
         if(isspace(s[i]))
            count ++;

    return count + 1;
}
