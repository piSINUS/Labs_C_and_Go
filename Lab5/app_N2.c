// @todo 
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int x,f;
    if  (x <= 5){
        printf("%d",2*x);
    };
    if (x<7 && x > 5)
    {
        printf("%d",3*log(2*x));
    };
    if (x>=7)
    {
        printf("%d",exp(x));
    };
    
    
    return 0;
}
