#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    double a;
    scanf("%lf", &a);
    double ans = (a * a) * 3.14159;
    printf("A=%.4lf\n", ans);
    return 0;
}