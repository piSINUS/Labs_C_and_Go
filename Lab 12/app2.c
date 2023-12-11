#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ameba=1, hours = 12;
    while (hours>0)
    {
        ameba*=2;
        hours -= 3;
    }
    printf("%d",ameba);
    return 0;
}
