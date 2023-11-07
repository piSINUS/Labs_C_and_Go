#include <stdlib.h>
#include <math.h>
#include <stdio.h>

void main()
{
    FILE *iofile = NULL;
    unsigned counter;
    int i, num;
 
    iofile = fopen("D:/c/numbers.bin", "rb");
    if (iofile == NULL){
        printf("Error opening file");
        getch();
        exit(ERROR_OPEN_FILE);
    }
 
    fread(&counter, sizeof(int), 1, iofile);
    for (i = 0; i < counter; i++)
{
        fread(&num, sizeof(int), 1, iofile);
        printf("%d\n", num);
    }
     
    fclose(iofile);
    getch();
}