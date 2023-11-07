
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int delenie(int ameba);
int main(int argc, char const *argv[])
{
    int result = delenie(24);
    printf("%d\n",result);

    return 0;
}

int delenie(int ameba)
{            
    int del = 2;
    if (ameba>1){
        return pow(del , ameba/3);
    }else{
        return 0;
    }
}