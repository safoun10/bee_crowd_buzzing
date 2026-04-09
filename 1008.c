#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int a, b;
    float c;
    scanf("%d %d %f", &a, &b, &c);
    printf("NUMBER = %d\n", a);
    printf("SALARY = U$ %.2f\n", (float)(b * c));
    return 0;
}