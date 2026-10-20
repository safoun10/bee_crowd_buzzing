#include <stdio.h>
#include <stdbool.h>

int main()
{
    while (true)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        if (x == 0 || y == 0)
        {
            return 0;
        }

        if (x > 0 && y > 0)
        {
            printf("primeiro\n");
        }
        else if (x < 0 && y > 0)
        {
            printf("segundo\n");
        }
        else if (x < 0 && y < 0)
        {
            printf("terceiro\n");
        }
        else if (x > 0 && y < 0)
        {
            printf("quarto\n");
        }
    }

    return 0;
}