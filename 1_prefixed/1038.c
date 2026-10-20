#include <stdio.h>

int main()
{
    int num, count;
    scanf("%d %d", &num, &count);
    float prices[] = {4.00, 4.50, 5.00, 2.00, 1.50};
    printf("Total: R$ %.2f\n", (count * prices[num + -1]));
    return 0;
}