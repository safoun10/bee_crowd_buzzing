#include <stdio.h>
#include <string.h>

int main()
{
    int limit, rabbit = 0, rat = 0, frog = 0;
    scanf("%d", &limit);
    for (int i = 0; i < limit; i++)
    {
        int num;
        char a;
        scanf("%d %c", &num, &a);
        if (a == 'C')
        {
            rabbit += num;
        }
        else if (a == 'R')
        {
            rat += num;
        }
        else if (a == 'S')
        {
            frog += num;
        }
    }

    int total = rabbit + rat + frog;
    float rabbit_percentage = ((float)rabbit / (float)total) * 100;
    float rat_percentage = ((float)rat / (float)total) * 100;
    float frog_percentage = ((float)frog / (float)total) * 100;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", rabbit);
    printf("Total de ratos: %d\n", rat);
    printf("Total de sapos: %d\n", frog);
    printf("Percentual de coelhos: %.2f %%\n", rabbit_percentage);
    printf("Percentual de ratos: %.2f %%\n", rat_percentage);
    printf("Percentual de sapos: %.2f %%\n", frog_percentage);

    return 0;
}