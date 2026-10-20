#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int even = 0;
    for (int i = 0; i < 5; i++)
    {
        int a;
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            even++;
        }
    }
    printf("%d valores pares\n", even);

    return 0;
}