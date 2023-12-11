#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){
    int arr_value;
    scanf("%d",&arr_value);
    int arr[arr_value],x,y,sum;
    scanf("%d",&x);
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
