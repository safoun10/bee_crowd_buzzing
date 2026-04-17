#include <stdio.h>
#include <math.h>

int main()
{
    float num = 0;
    for (float i = 0; i <= 20; i += 2)
    {
        for (float j = 1; j <= 3; j++)
        {
            float i_check = ceil(i / 10) - (num / 10);
            float num_check = ceil(num / 10) - (num / 10);

            if (i_check > 0.0 || num_check > 0)
            {
                printf("I=%.1f J=%.1f\n", (i / 10), j + (num / 10));
            }
            else
            {
                printf("I=%d J=%d\n", (int)(i / 10), (int)(j + (num / 10)));
            }
        }
        num += 2;
    }

    return 0;
}