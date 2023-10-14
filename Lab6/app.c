// @todo Дано количество дней с начало года. 
// Вывести название дня недели, если первое января был понедельник.
#include <math.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int days;
    scanf("%d",&days);
    days = days%7;
    switch (days)
    {
    case 0:
        printf("pon");
        break;
    case 1:
        printf("tue");
        break;
    case 2:
        printf("wen");
        break;
    case 3:
        printf("thur");
        break;
    case 4:
        printf("fri");
        break;
    case 5:
        printf("sat");
        break;
    case 6:
        printf("sun");
        break;
    default:
        break;
    }
    return 0;
}
