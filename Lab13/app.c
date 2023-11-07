#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int b[100];
int n1, n2;
int sum=0;

srand (time (NULL));

printf("n1= ");
scanf("%d", &n1);
printf("n2= ");
scanf("%d", &n2);

int A,B;
printf("A= ");
scanf("%d", &A);
printf("B= ");
scanf("%d", &B);


printf("massiv1:\n");
for (int i = 0; i<n1; i++)
{
	a[i]= rand() % (B - A + 1) + A;
	printf("a[%d]= %d\n", i,a[i]);
}

printf("massiv2:\n");
    
    return 0;
}
