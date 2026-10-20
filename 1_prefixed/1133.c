#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int larger = (a > b) ? a : b;
    int smaller = (a < b) ? a : b;

    for (int t = smaller + 1; t < larger; t++)
    {
        if ((t % 5 == 2) || (t % 5 == 3))
        {
            printf("%d\n", t);
        }
    }

    return 0;
}