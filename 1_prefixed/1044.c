#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int a, b, greater;
    scanf("%d %d", &a, &b);
    greater = (a > b) ? a : b;
    if (((greater == a) && (greater % b == 0)) || ((greater == b) && (greater % a == 0)))
    {
        printf("Sao Multiplos\n");
    }
    else
    {
        printf("Nao sao Multiplos\n");
    }
    return 0;
}