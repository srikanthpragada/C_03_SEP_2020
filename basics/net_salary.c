// Calculate Net Salary

#include<stdio.h>

void main()
{
  float basic,hra,ta,it,gross_salary,net_salary;

    printf("Enter basic salary :");
    scanf("%f",&basic);

    hra = basic * 30 / 100;
    ta = basic * 10 / 100;
    gross_salary = hra + ta + basic;
    it = gross_salary * 15 / 100;
    net_salary = gross_salary - it;
    printf("Net salary : %.0f",net_salary);
}
