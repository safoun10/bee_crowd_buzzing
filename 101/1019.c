#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int num;
    scanf("%d", &num);

    int hour = num / 3600;
    int min = (num - (hour * 3600)) / 60;
    int sec = num - (hour * 3600) - (min * 60);

    printf("%d:%d:%d\n", hour, min, sec);

    return 0;
}