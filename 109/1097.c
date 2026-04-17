#include <stdio.h>

int main()
{
    int counter = 7;
    for (int i = 1; i <= 9; i += 2)
    {
        for (int j = counter; j >= counter - 2; j--)
        {
            printf("I=%d J=%d\n", i, j);
        }
        counter += 2;
    }

    return 0;
}