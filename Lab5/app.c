// @todo Даны два целых числа. Если они равны, вычислить их произведение,
//  в противном случае вычислить их сумму.
#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int first_num, second_num;
    printf("Введите1 число");
    scanf("%d",&first_num); 
    printf("Введите2 число");
    scanf("%d",&second_num); 
    if (first_num == second_num)
    {
        printf("%d",first_num*second_num);
    }else
    {
        printf("%d",first_num+second_num);
    };
    
    
    return 0;
}
