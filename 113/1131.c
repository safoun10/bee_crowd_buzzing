#include <stdio.h>
#include <stdbool.h>

int main()
{
    int inter = 0, gremio = 0, total = 0, draw = 0;

    while (true)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        total++;

        if (a > b)
        {
            inter++;
        }
        else if (a < b)
        {
            gremio++;
        }
        else if (a == b)
        {
            draw++;
        }

        printf("Novo grenal (1-sim 2-nao)\n");

        int check;
        scanf("%d", &check);

        if (check == 2)
        {
            break;
        }
    }

    printf("%d grenais\n", total);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", draw);

    if (inter > gremio)
    {
        printf("Inter venceu mais\n");
    }
    else if (gremio > inter)
    {
        printf("Gremio venceu mais\n");
    }
    else if (inter == gremio)
    {
        printf("Nao houve vencedor\n");
    }

    return 0;
}