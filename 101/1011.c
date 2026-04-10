#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    double a;
    scanf("%lf", &a);
    double ans = (4.0 / 3.0) * 3.14159 * (a * a * a);
    printf("VOLUME = %.3lf\n", ans);
    return 0;
}