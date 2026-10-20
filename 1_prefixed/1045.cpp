#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    float sides[] = {a, b, c};
    sort(sides, sides + 3, greater<float>());

    if (sides[0] >= sides[1] + sides[2])
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if ((sides[0] * sides[0]) == (sides[1] * sides[1]) + (sides[2] * sides[2]))
        {
            printf("TRIANGULO RETANGULO\n");
        }
        if ((sides[0] * sides[0]) > (sides[1] * sides[1]) + (sides[2] * sides[2]))
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if ((sides[0] * sides[0]) < (sides[1] * sides[1]) + (sides[2] * sides[2]))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if ((sides[0] == sides[1]) && (sides[0] == sides[2]))
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        if ((sides[0] == sides[1] && sides[2] != sides[0]) || (sides[0] == sides[2] && sides[1] != sides[0]) || (sides[1] == sides[2] && sides[0] != sides[1]))
        {
            printf("TRIANGULO ISOSCELES\n");
        }

        return 0;
    }
}