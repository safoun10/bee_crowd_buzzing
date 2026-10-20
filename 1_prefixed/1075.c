#include <stdio.h>

int main()
{
    int rest;
    scanf("%d", &rest);
    for (int i = 0; i < 10000; i++)
    {
        if (i % rest == 2)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}