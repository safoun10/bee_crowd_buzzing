#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    for (int i = 0; i < limit; i++)
    {
        double a, b, c;
        scanf("%lf %lf %lf", &a, &b, &c);
        double answer = ((a * 2) + (b * 3) + (c * 5)) / 10;
        printf("%.1lf\n", answer);
    }

    return 0;
}