#include <stdio.h>
#include <string.h>

int in_seconds(int hour, int minute, int second)
{
    int total = second + (minute * 60) + (hour * 60 * 60);
    return total;
}

int main()
{
    char word[5], colon[3];
    int day_init, init_hour, init_min, init_sec, day_end, end_hour, end_min, end_sec;

    scanf("%s %d", word, &day_init);
    scanf("%d %c %d %c %d", &init_hour, &colon, &init_min, &colon, &init_sec);
    scanf("%s %d", word, &day_end);
    scanf("%d %c %d %c %d", &end_hour, &colon, &end_min, &colon, &end_sec);

    int a_day = (60 * 60 * 24);

    int init_time = a_day - in_seconds(init_hour, init_min, init_sec);
    int end_time = in_seconds(end_hour, end_min, end_sec);
    int mid_time = (day_end - day_init > 1) ? ((day_end - day_init - 1) * a_day) : 0;

    int grand_total = (day_end != day_init) ? init_time + mid_time + end_time : in_seconds(end_hour, end_min, end_sec) - in_seconds(init_hour, init_min, init_sec);

    int final_day = grand_total / a_day;
    int final_hour = (grand_total - (final_day * a_day)) / (60 * 60);
    int final_minutes = (grand_total - (final_day * a_day) - (final_hour * 60 * 60)) / 60;
    int final_seconds = grand_total - (final_day * a_day) - (final_hour * 60 * 60) - (final_minutes * 60);

    printf("%d dia(s)\n", final_day);
    printf("%d hora(s)\n", final_hour);
    printf("%d minuto(s)\n", final_minutes);
    printf("%d segundo(s)\n", final_seconds);
    return 0;
}