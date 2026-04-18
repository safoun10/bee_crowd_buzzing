#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    for (int i = 0; i < limit; i++)
    {
        float a, b;
        scanf("%f %f", &a, &b);

        if (b == 0)
        {
            printf("divisao impossivel\n");
        }
        else if (a == 0)
        {
            printf("0.0\n");
        }
        else
        {
            printf("%.1f\n", a / b);
        }
    }

    return 0;
}