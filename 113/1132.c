#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int larger = (a > b) ? a : b;
    int smaller = (a < b) ? a : b;

    int sum = 0;

    for (int t = smaller; t <= larger; t++)
    {
        if (t % 13 != 0)
        {
            sum += t;
        }
    }
    printf("%d\n", sum);

    return 0;
}