#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    for (int i = 0; i < limit; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        int larger = (a > b) ? a : b;
        int smaller = (a < b) ? a : b;

        int sum = 0;
        for (int t = smaller + 1; t < larger; t++)
        {
            if (t % 2 != 0)
            {
                sum += t;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}