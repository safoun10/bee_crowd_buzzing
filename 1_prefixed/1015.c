#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    double x1, y1, x2, y2;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    double ans = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("%.4lf\n", ans);
    return 0;
}