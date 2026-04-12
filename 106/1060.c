#include <stdio.h>

int main()
{
    int count = 0;
    for (int i = 1; i <= 6; i++)
    {
        double a;
        scanf("%lf", &a);
        if (a > 0)
        {
            count++;
        }
    }
    printf("%d valores positivos\n", count);

    return 0;
}