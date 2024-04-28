#include <stdio.h>
#include <math.h>
int main(void)
{
    int n, i; float a, b, P;
    printf("Input the value of n: ");
    scanf("%d", &n);
    P=1; a=1; b=1; i=1;
    while(i<=3*n)
    {
        P+=a+b;
        a=sin(a);
        b=cos(b+3);
        i++;
    }
    printf("%f\n", P);
    return 0;
}