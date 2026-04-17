#include <stdio.h>

int main()
{
    for (int i = 0; i <= 12; i++)
    {
        int i_num = (i * 3) + 1;
        int j_num = 60 - (i * 5);
        printf("I=%d J=%d\n", i_num, j_num);
    }

    return 0;
}