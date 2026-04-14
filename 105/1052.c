#include <stdio.h>
#include <string.h>

int main()
{
    int month;
    scanf("%d", &month);
    char *array[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    printf("%s\n", array[month - 1]);
    return 0;
}