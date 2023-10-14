// @todo 

#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float sum=0, n,x,el;
    scanf("%f",&n);
    scanf("%f",&x);
    for (int i = 0; i <=n; i++)
    {
         el = pow(-1,i-1)*((2-i)/(1-3*x));
         sum+=el;
        //  printf("%d",sum );
         printf("%f\n",el);}

    printf("%f",sum );
    return 0;
}
