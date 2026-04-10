#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int num;
    scanf("%d", &num);

    int year = num / 365;
    int month = (num - (year * 365)) / 30;
    int day = num - (year * 365) - (month * 30);

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, month, day);

    return 0;
}