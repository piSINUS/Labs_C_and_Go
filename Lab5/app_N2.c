// @todo  формула стр 60
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int f;
    float x;
    scanf("%f",&x);
    if  (x <= 5){
        printf("%f",2*x);
    };
    if (x<7 && x > 5)
    {
        printf("%f",3*log(2*x));
    };
    if (x>=7)
    {
        printf("%f",exp(x));
    };
    
    
    return 0;
}

// int main(int argc, char const *argv[])
// {
//     int f;
// float x;
//     scanf("%f",&x);
//     if  (x <= 5){
//         printf("%f",2*x);
    
//     if (x<7)
//     {
//         if(x>5){
//         printf("%f",3*log(2*x));}
//     };
//     if (x>=7)
//     {
//         printf("%f",exp(x));
//     };

//     return 0;
// }}

//gcc app_N2.c -o app_N2 -std=c11 -lm
//cd '/home/pinus/Рабочий стол/Labs_C_and_Go/Lab5'