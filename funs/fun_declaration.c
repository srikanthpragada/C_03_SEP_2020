#include <stdio.h>

float avg(int,int);  // function declaration

void main()
{
float a;

    a = avg(10,20);
}

// Function definition
float avg(int n1, int n2)
{
    return (n1 + n2) / 2.0;
}
