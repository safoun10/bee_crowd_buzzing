#include <stdio.h>

int main()
{
    int limit, in = 0, out = 0;
    scanf("%d", &limit);
    for (int i = 0; i < limit; i++)
    {
        int a;
        scanf("%d", &a);
        (a >= 10 && a <= 20) ? in++ : out++;
    }
    printf("%d in\n%d out\n", in, out);

    return 0;
}