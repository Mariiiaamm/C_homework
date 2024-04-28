#include <stdio.h>
#include <math.h>
int main(void)
{
    int n, i; float x, y, P;
    printf("Input the value of n: ");
    scanf("%d", &n);
    P=1; x=1; y=1; i=0;
    while(i<=3*n)
    {
        P+=cos(x+y);
        x=x/2;
        y=y/3;
        i++;
    }
    printf("%f\n", P);
    return 0;
}