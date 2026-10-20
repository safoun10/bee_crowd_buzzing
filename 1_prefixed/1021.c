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

    int left = round((amount + rest) * 100);

    int coins[] = {100, 50, 25, 10, 5, 1};
    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++)
    {
        int count = left / coins[i];
        printf("%d moeda(s) de R$ %.2f\n", count, coins[i] / 100.0);
        left %= coins[i];
    }

    return 0;
}