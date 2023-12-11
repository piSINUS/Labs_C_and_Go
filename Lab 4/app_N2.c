// @todo Дано семизначное число. Определить на сколько произведение цифр, стоящих на четных позициях, меньше самого числа.
#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int Num;
    printf("Ведите семизначное число ");
    scanf("%d", &Num);
    
    Num = Num-(Num%1000000/100000*((Num%10000)/1000)*((Num%100)/10));

    printf("%d",Num);
    return 0;
}
