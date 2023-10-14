// @todo Даны стороны пяти квадратов. 
// Определить квадрат с самой длинной диагональю и вывести ее значение.
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    float first,sec,third,fourth,fifth,max_d; 
    scanf("%f",  &first);
    scanf("%f",  &sec);
    scanf("%f",  &third);
    scanf("%f",  &fourth);
    scanf("%f",  &fifth);
    max_d = fmax(first,sec);
    max_d = fmax(max_d,third);
    max_d = fmax(max_d,fourth);
    max_d =fmax(max_d,fifth);
    max_d=sqrt(2)*max_d;
    printf("%f\n", max_d);
    return 0;
}
