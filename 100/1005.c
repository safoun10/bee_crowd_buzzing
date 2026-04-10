#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    double ans = ((a * 3.5) + (b * 7.5)) / 11;
    printf("MEDIA = %.5lf\n", ans);
    return 0;
}