#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char name[10];
    double a, b;
    scanf("%s %lf %lf", name, &a, &b);
    printf("TOTAL = R$ %.2lf\n", a + (b * .15));
    return 0;
}