#include <stdio.h>

int main()
{
    int limit, count = 0;
    scanf("%d", &limit);

    while (count < 6)
    {
        if (limit % 2 != 0)
        {
            printf("%d\n", limit);
            count++;
        }
        limit++;
    }

    return 0;
}