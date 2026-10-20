#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d^2 = %d\n", i, (i * i));
        }
    }

    return 0;
}