#include <stdio.h>

int main()
{
    float salary, new, bonus;
    int percent;
    scanf("%f", &salary);
    if (salary <= 400.00)
    {
        bonus = salary * .15;
        percent = 15;
    }
    else if (salary > 400.00 && salary <= 800.00)
    {
        bonus = salary * .12;
        percent = 12;
    }
    else if (salary > 800.00 && salary <= 1200.00)
    {
        bonus = salary * .10;
        percent = 10;
    }
    else if (salary > 1200.00 && salary <= 2000.00)
    {
        bonus = salary * .07;
        percent = 7;
    }
    else if (salary > 2000.00)
    {
        bonus = salary * .04;
        percent = 4;
    }

    printf("Novo salario: %.2f\n", salary + bonus);
    printf("Reajuste ganho: %.2f\n", bonus);
    printf("Em percentual: %d %%\n", percent);
    return 0;
}