#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int x, y;
    float c;
    printf("Введите х ");
    scanf("%d", &x);
    printf("ВВедите у ");
    scanf("%d", &y);
    c = (float)abs(3 * x - 5) / (x * x * y);
    printf("Resault ");
    printf("%f", c);
    return 0;
}
