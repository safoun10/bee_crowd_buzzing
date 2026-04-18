#include <stdio.h>
#include <stdbool.h>

bool func()
{
    printf("novo calculo (1-sim 2-nao)\n");
    int x;
    scanf("%d", &x);

    if (x < 1 || x > 2)
    {
        return func();
    }
    else if (x == 1)
    {
        return true;
    }
    else if (x == 2)
    {
        return false;
    }
}

int main()
{
    int counter = 0;
    float sum = 0;

    while (true)
    {
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

        if (counter == 2)
        {
            printf("media = %.2f\n", sum / 2);
            bool act = func();
            if (act == false)
            {
                return 0;
            }
            else
            {
                counter = 0;
                sum = 0;
            }
        }
    }

    return 0;
}