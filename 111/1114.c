#include <stdio.h>
#include <stdbool.h>

int main()
{
    while (true)
    {
        int a;
        scanf("%d", &a);

        if (a == 2002)
        {
            printf("Acesso Permitido\n");
            return 0;
        }
        printf("Senha Invalida\n");
    }
    
    return 0;
}