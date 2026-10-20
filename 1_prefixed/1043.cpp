#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    float sides[] = {a, b, c};
    sort(sides, sides + 3, greater<float>());
    if ((sides[1] + sides[2]) <= sides[0])
    {
        printf("Area = %.1f\n", ((a + b) / 2) * c);
    }
    else
    {
        printf("Perimetro = %.1f\n", a + b + c);
    }

    return 0;
}