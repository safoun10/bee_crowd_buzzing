#include <stdio.h>
#include <stdbool.h>

int main()
{
    int alcohol = 0, gasoline = 0, diesel = 0;
    printf("MUITO OBRIGADO\n");
    while (true)
    {
        int num;
        scanf("%d", &num);

        if (num == 4)
        {
            break;
        }
        else if (num == 1)
        {
            alcohol++;
        }
        else if (num == 2)
        {
            gasoline++;
        }
        else if (num == 3)
        {
            diesel++;
        }
    }

    printf("Alcool: %d\n", alcohol);
    printf("Gasolina: %d\n", gasoline);
    printf("Diesel: %d\n", diesel);

    return 0;
}