#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int target, ans = 0;
    scanf("%d", &target);
    for (int i = 0; i < 5; i++)
    {
        int tea;
        scanf("%d", &tea);
        if (target == tea)
        {
            ans++;
        }
    }
    printf("%d\n", ans);

    return 0;
}