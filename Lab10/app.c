// @todo Найти все простые делители числа
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numb;
    printf("Ved chisl ");
    scanf("%d",&numb);
    int count1 = numb-1;
    for ( count1; count1>1; count1=count1-1)
    {
        int schet=0;
        if (numb%count1==0)
        {
            int count2 =count1-1;
            for(count2; count2>1 ; count2=count2-1)
            {
                if (count1 % count2==0)
                {
                    schet++;
                }
                
            }
        if (schet==0)
        {
            printf("prostie chisla %d\n",count1);
        }
            
        }
        
    }
    
    return 0;
}