// Одноклеточная амеба каждые три часа делится на две клетки. Определить, сколько клеток будет через 3, 6, 9, … 24 часа.
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int delenie(int hours)
{            
    if (hours==0){
        return 1;
    }else{
        return delenie(hours-3)*2;
    }
}

int main(int argc, char const *argv[])
{
    printf("%d\n",delenie(12));
    return 0;
}
