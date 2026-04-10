#include <stdio.h>
#include <math.h>

int main()
{
    float total_amount;
    scanf("%f", &total_amount);

    int amount = floor(total_amount);
    float rest = total_amount - amount;

    int notes[] = {100, 50, 20, 10, 5, 2};
    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++)
    {
        int count = amount / notes[i];
        printf("%d nota(s) de R$ %d.00\n", count, notes[i]);
        amount %= notes[i];
    }

    float left = amount + rest;

    float coins[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++)
    {
        int count = left / coins[i];
        printf("%d moeda(s) de R$ %.2f\n", count, coins[i]);
        left = fmod(left, coins[i]);
    }

    return 0;
}