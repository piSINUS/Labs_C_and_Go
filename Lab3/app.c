// @todo : Определить стоимость путевки, складывающейся из цен на билет (отдельно туда и обратно), стоимости проживания 
// за один день, стоимости питания за один день, количества дней и стоимости экскурсий.
#include <math.h>
#include <stdio.h>

int main(void)
{
    int total_sum, ticket_in, ticket_out, days, feed, live, excursion;
    printf("Введите Цену билета в стрвну:");
    scanf("%u", &ticket_in);
    printf("Введите цену билета обратно:");
    scanf("%u", &ticket_out);
    printf("Введите количество дней:");
    scanf("%u", &days);
    printf("Введите цену за питание за день:");
    scanf("%u", &feed);
    printf("Введите цену проживания за день:");
    scanf("%u", &live);
    printf("Введите цену экскурсии:");
    scanf("%u", &excursion);
    total_sum = ticket_in + ticket_out + (feed * days) + (live * days) + excursion;
    printf("Итоговая цена поездки: \n");
    printf("%d", total_sum);

    return 0;
}
