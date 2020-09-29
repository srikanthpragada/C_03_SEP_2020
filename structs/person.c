
struct person
{
   char name[30];
   int age;
};

void main()
{
  struct person p1;
  struct person p2 = {"Bill",24};

     printf("Enter name :");
     gets(p1.name);

     printf("Enter age  :");
     scanf("%d",&p1.age);

     printf("%s %d", p1.name, p1.age);

     p2 = p1;


}
