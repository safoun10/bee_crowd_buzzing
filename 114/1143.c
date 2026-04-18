#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
    {
        printf("%d %d %d\n", i, i * i, i * i * i);
    }

    return 0;
}