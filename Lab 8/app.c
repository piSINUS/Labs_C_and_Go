//@todo 
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c=0,a;
    do
    {
        scanf("%d",&a);
        if (a %2 ==0){
            c  += a;
        };
    } while (a!=0);
    printf("%d",c);
    return 0;
}
