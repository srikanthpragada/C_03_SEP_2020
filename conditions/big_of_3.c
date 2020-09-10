#include<stdio.h>

void main()
{
  int a,b,c;

    printf("Enter three numbers : ");
    scanf("%d%d%d",&a , &b , &c);

    if(a > b && a > c)
    {
       printf("%d",a);
    }
    else
        if(b > c)
        {
           printf("%d", b);
        }
        else
        {
           printf("%d" ,c);
        }

}
