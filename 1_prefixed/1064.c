#include <stdio.h>

int main()
{
    int count = 0;
    float sum = 0;
    for (int i = 0; i < 6; i++)
    {
        float a;
        scanf("%f", &a);
        if (a > 0)
        {
            count++;
            sum += a;
        }
    }
    printf("%d valores positivos\n", count);
    printf("%.1f\n", sum / count);

    return 0;
}