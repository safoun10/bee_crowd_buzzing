#include <stdio.h>
#include <string.h>

int main()
{
    char phase_1[20], phase_2[20], phase_3[20];
    scanf("%s %s %s", phase_1, phase_2, phase_3);
    if (strcmp(phase_1, "vertebrado") == 0)
    {
        if (strcmp(phase_2, "ave") == 0)
        {
            if (strcmp(phase_3, "carnivoro") == 0)
            {
                printf("aguia\n");
            }
            else
            {
                printf("pomba\n");
            }
        }
        else
        {
            if (strcmp(phase_3, "onivoro") == 0)
            {
                printf("homem\n");
            }
            else
            {
                printf("vaca\n");
            }
        }
    }
    else
    {
        if (strcmp(phase_2, "inseto") == 0)
        {
            if (strcmp(phase_3, "hematofago") == 0)
            {
                printf("pulga\n");
            }
            else
            {
                printf("lagarta\n");
            }
        }
        else
        {
            if (strcmp(phase_3, "hematofago") == 0)
            {
                printf("sanguessuga\n");
            }
            else
            {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}