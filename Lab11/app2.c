#include <stdlib.h>
#include <math.h>
#include <stdio.h>


int main(int argc, char const *argv[])
{
    float Sum = 0,el;
    int eps,x,i=2,f=1;
    scanf("%d",&eps);
    scanf("%d",&x);

    while (el<eps)
    {
        el = (float)pow(-1,i) * ((pow(4,(pow(x,i))))/(f+2));
        if (el<eps)
        {break;  }
        Sum += (float)el;
        printf("%f\n",Sum);
        i+=1;
        f*=i;
        
    }
    printf("%f",Sum);
    return 0;
}

