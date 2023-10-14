// @todoС начала суток прошло N секунд (N – целое). Определить количество минут, прошедших с начала последнего часа.
#include <math.h>
#include <stdio.h>


int main(int argc, char const *argv[])
{
    int N;
    printf("Введите кол секунд :");
    scanf("%d", &N);
    N= (N % 3600)/60;
    printf("%d",N);
    return 0;
}
