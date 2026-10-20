#include <stdio.h>

int main()
{
    int limit;
    scanf("%d", &limit);
    for (int i = 0; i < limit; i++)
    {
        int a;
        scanf("%d", &a);

        if (a == 0)
        {
            printf("NULL\n");
        }
        else if (a % 2 == 0)
        {
            printf("EVEN ");
        }
        else
        {
            printf("ODD ");
        }

        if (a > 0)
        {
            printf("POSITIVE\n");
        }
        else if (a < 0)
        {
            printf("NEGATIVE\n");
        }
    }

    return 0;
}