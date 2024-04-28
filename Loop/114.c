#include <stdio.h>
#include <math.h>
int main(void)
{
    int y, i, n; float x, S;
    printf("Input the value of n: ");
    scanf("%d", &n);
    S=0; x=-7; y=8; i=0;
    while(i<=n)
    {
        S+=x*x-2*y;
        x=sin(x)*sin(x);
        y=y+2;
        i++;
    }
    printf("%f\n", S);
    return 0;
}