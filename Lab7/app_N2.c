// @todo Дано целое положительное число. Определить произведение цифр, стоящих на нечетных позициях.
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int score,start_num = 1234567, mnoj = 1;
    while (start_num>0)
    {
        mnoj = start_num %10 * mnoj;
        start_num = start_num / 100;
       
    }
    printf("%d",mnoj);
    return 0;
}
