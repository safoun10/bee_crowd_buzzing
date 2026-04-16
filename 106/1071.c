#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int larger, smaller;
    if (a > b)
    {
        larger = a;
        smaller = b;
    }
    else
    {
        larger = b;
        smaller = a;
    }

    int sum = 0;
    for (int i = smaller + 1; i < larger; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }

    printf("%d\n", sum);
    return 0;
}