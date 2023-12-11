// @todo Дано целое положительное число. Определить произведение цифр, стоящих на нечетных позициях.
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int score,start_num = 123456789, mnoj = 1,len,k=0;
    len = start_num;
    
    while (len!=0){
        len/=10;
        k++;
    }
    printf("%d",k);
    if(k%2==0){
        start_num = start_num/10;
    }
    while (start_num>0)
    {   
        mnoj = start_num %10 * mnoj;
        start_num = start_num / 100;
       
    }
    printf("%d",mnoj);
    return 0;
}
