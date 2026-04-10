#include <stdio.h>

int note_count(int amount, int value)
{
    int note_count = amount / value;
    return note_count;
}

int main()
{
    int amount;
    scanf("%d", &amount);

    int num_100 = note_count(amount, 100);
    int num_50 = note_count(amount - (num_100 * 100), 50);
    int num_20 = note_count(amount - (num_100 * 100) - (num_50 * 50), 20);
    int num_10 = note_count(amount - (num_100 * 100) - (num_50 * 50) - (num_20 * 20), 10);
    int num_5 = note_count(amount - (num_100 * 100) - (num_50 * 50) - (num_20 * 20) - (num_10 * 10), 5);
    int num_2 = note_count(amount - (num_100 * 100) - (num_50 * 50) - (num_20 * 20) - (num_10 * 10) - (num_5 * 5), 2);
    int num_1 = note_count(amount - (num_100 * 100) - (num_50 * 50) - (num_20 * 20) - (num_10 * 10) - (num_5 * 5) - (num_2 * 2), 1);

    printf("%d\n", amount);
    printf("%d nota(s) de R$ 100,00\n", num_100);
    printf("%d nota(s) de R$ 50,00\n", num_50);
    printf("%d nota(s) de R$ 20,00\n", num_20);
    printf("%d nota(s) de R$ 10,00\n", num_10);
    printf("%d nota(s) de R$ 5,00\n", num_5);
    printf("%d nota(s) de R$ 2,00\n", num_2);
    printf("%d nota(s) de R$ 1,00\n", num_1);

    return 0;
}

// method 2

#include <stdio.h>

int main()
{
    int amount;
    scanf("%d", &amount);
    
    int notes[] = {100, 50, 20, 10, 5, 2, 1};

    printf("%d\n", amount);
    for (int i = 0; i < 7; i++)
    {
        int count = amount / notes[i];
        printf("%d nota(s) de R$ %d,00\n", count, notes[i]);
        amount %= notes[i];
    }

    return 0;
}
