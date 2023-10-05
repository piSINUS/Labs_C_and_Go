// @todo Заданы координаты четырех вершин прямоугольника. Определить его периметр

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int x1, x2, x3, x4, y1, y2, y3, y4, a, b, c, d, P;
    printf("Введите x1 ");
    scanf("%u", &x1);
    printf("Введите x2 ");
    scanf("%u", &x2);
    printf("Введите x3 ");
    scanf("%u", &x3);
    printf("Введите x4 ");
    scanf("%u", &x4);
    printf("Введите y1 ");
    scanf("%u", &y1);
    printf("Введите y2 ");
    scanf("%u", &y2);
    printf("Введите y3 ");
    scanf("%u", &y3);
    printf("Введите y4 ");
    scanf("%u", &y4);
    a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    b = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
    c = sqrt(pow((x4 - x3), 2) + pow((y4 - y3), 2));
    d = sqrt(pow((x4 - x1), 2) + pow((y4 - y1), 2));
    P = a + b + c + d;
    printf("Периметр =\n");
    printf("%d", P);

    return 0;
}
