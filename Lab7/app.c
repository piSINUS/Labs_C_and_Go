// @todo Дано целое число m>1. Получить наименьшее целое k, при котором 4**k>m.
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int k=0, m;
    scanf("%d",&m);
    while (pow(4,k)<=m)
    {
        k++;
    };
    printf("%d",k);
    return 0;
}
