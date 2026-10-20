#include <stdio.h>
#include <stdbool.h>

int main()
{
    while (true)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        if (a <= 0 || b <= 0)
        {
            return 0;
        }

        int larger = (a > b) ? a : b;
        int smaller = (a < b) ? a : b;
        int sum = 0;

        for (int i = smaller; i <= larger; i++)
        {
            printf("%d ", i);
            sum += i;
        }
        printf("Sum=%d\n", sum);
    }

    return 0;
}