//
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int x = 0; x <= 30; x = x + 3)
    {
        int t = 2 - x;
        int y = pow(t, 3) + pow(t, 2) * 3 + 1;
        printf("%d  x\n", x);
        // printf("%d \n y",y);
        printf("%d  t\n", t);
    }

    return 0;
}
