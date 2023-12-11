//  Определить количество элементов массива, принадлежащих указанному пользователем диапазону [X, Y]. 
// Вычесть из всех четных элементов массива сумму всех элементов массива.
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){
    int arr_value;
    printf("vved kol-vo el\n");
    scanf("%d",&arr_value);
    int arr[arr_value],x,y,sum;
    printf("vves x\n");
    scanf("%d",&x);
    printf("vved y\n");
    scanf("%d",&y);

    for (int i=0; x <y;)
{
    arr[i]=x;
    x+=1;
    i++;
    
} 
    for (int i=0;i < arr_value;){
        sum += arr[i];
        i+=2;
    }
    printf("%d",sum);


    return 0;

}
