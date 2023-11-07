#include <stdlib.h>
#include <math.h>
#include <stdio.h>


int main(int argc, char const *argv[])
{
    float Sum = 0,el;
    int eps,x,i=1,f=1;
    scanf("%d",&eps);
    scanf("%d",&x);

    for(;;)
    {
        el = pow(-1,i) * ((pow(4,(pow(x,i))))/(f+2));
        if(abs(el)<eps){break;}
        Sum += el;
        printf("%f\n",Sum);
        i+=1;  
        f*=i;
        
    }
    printf("%f\n",Sum);
    return 0;
}

