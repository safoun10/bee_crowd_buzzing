#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double ans = ((a * 2) + (b * 3) + (c * 5)) / 10;
    printf("MEDIA = %.1lf\n", ans);
    return 0;
}