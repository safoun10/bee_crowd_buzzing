#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    int num = 1;
    while (num <= limit)
    {
        if (num % 2 != 0)
        {
            printf("%d\n", num);
        }
        num++;
    }

    return 0;
}