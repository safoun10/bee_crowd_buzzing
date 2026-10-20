#include <stdio.h>
#include <stdbool.h>

int main()
{
    while (true)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        if (a == b)
        {
            return 0;
        }

        if (a > b)
        {
            printf("Decrescente\n");
        }
        else
        {
            printf("Crescente\n");
        }
        
        
    }

    return 0;
}