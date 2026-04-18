#include <stdio.h>
#include <stdbool.h>

int main()
{
    int counter = 0;
    float sum = 0;
    while (true)
    {
        if (counter >= 2)
        {
            printf("media = %.2f\n", sum / 2);
            return 0;
        }

        float num;
        scanf("%f", &num);

        if (num < 0 || num > 10)
        {
            printf("nota invalida\n");
        }
        else
        {
            counter++;
            sum += num;
        }
    }

    return 0;
}