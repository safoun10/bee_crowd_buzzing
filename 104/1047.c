#include <stdio.h>

int main()
{
    int a, b, c, d, total_time;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int init_time = (a * 60) + b;
    int end_time = (c * 60) + d;

    if (init_time > end_time)
    {
        total_time = (24 * 60) - init_time + end_time;
    }
    else if (a == b && a == c && c == d)
    {
        total_time = 24 * 60;
    }
    else
    {
        total_time = end_time - init_time;
    }

    int final_hour = total_time / 60;
    int final_minute = total_time - (final_hour * 60);

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", final_hour, final_minute);

    return 0;
}