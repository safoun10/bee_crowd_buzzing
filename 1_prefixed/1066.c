#include <stdio.h>

int main()
{
    int even = 0, odd = 0, positive = 0, negative = 0;
    for (int i = 0; i < 5; i++)
    {
        int a;
        scanf("%d", &a);
        (a % 2 == 0) ? even++ : odd++;
        if (a > 0)
        {
            positive++;
        }
        if (a < 0)
        {
            negative++;
        }
    }
    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", positive);
    printf("%d valor(es) negativo(s)\n", negative);

    return 0;
}