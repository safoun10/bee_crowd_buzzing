#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int distance;
    float fuel;
    scanf("%d %f", &distance, &fuel);
    printf("%.3f km/l\n", (distance / fuel));
    return 0;
}