#include <stdio.h>

int main()
{
    float a, b, c, d, e;
    scanf("%f %f %f %f", &a, &b, &c, &d);

    float avg = ((a * 2) + (b * 3) + (c * 4) + d) / 10;
    printf("Media: %.1f\n", avg);
    if (avg >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (avg < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else
    {
        printf("Aluno em exame.\n");
        scanf("%f", &e);
        printf("Nota do exame: %.1f\n", e);
        avg += e;
        avg /= 2;

        if (avg >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if (avg <= 4.9)
        {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", avg);
    }

    return 0;
}