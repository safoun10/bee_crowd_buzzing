#include <stdio.h>

int main()
{
    float salary;
    scanf("%f", &salary);
    if (salary <= 2000.00)
    {
        printf("Isento\n");
    }
    else if (salary > 2000.00 && salary <= 3000.00)
    {
        printf("R$ %.2f\n", (salary - 2000.00) * .08);
    }
    else if (salary > 3000.00 && salary <= 4500.00)
    {
        printf("R$ %.2f\n", ((salary - 3000.00) * .18) + 80);
    }
    else if (salary > 4500.00)
    {
        printf("R$ %.2f\n", ((salary - 4500.00) * .28) + 350);
    }

    return 0;
}