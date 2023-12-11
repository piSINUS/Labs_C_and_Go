//Вычислить значения выражений у для значений x, равных 3, 6, …, 30: y = t3 + 3t2 + 1, t =2 − x.
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int x = 0; x <= 30; x = x + 3)
    {
        int t = 2 - x;
        int y = pow(t, 3) + pow(t, 2) * 3 + 1;
        printf("x- %d  \n", x);
        printf("y- %d \n ",y);
        printf("t- %d  \n", t);
    }

    return 0;
}

//gcc app.c -o app -std=c11 -lm
//cd '/home/pinus/Рабочий стол/Labs_C_and_Go/Lab9'