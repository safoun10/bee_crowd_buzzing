#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    int num = 1;

    for (int i = 0; i < limit; i++)
    {
        printf("%d %d %d PUM\n", num, num + 1, num + 2);
        num += 4;
    }

    return 0;
}