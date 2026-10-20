#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n1, u1, n2, u2;
    float p1, p2;
    scanf("%d %d %f", &n1, &u1, &p1);
    scanf("%d %d %f", &n2, &u2, &p2);

    printf("VALOR A PAGAR: R$ %.2f\n", ((u1 * p1) + (u2 * p2)));
    return 0;
}