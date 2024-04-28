#include <stdio.h>
#include <math.h>
int main(void)
{ 
    int n, i; float x, d, P;
    printf("Input the values of x and n: ");
    scanf("%f %d", &x, &n);
    P=1; d=2; i=1;
    while (i<=n)
    {
        P*=cos((2*i-1)*x)/(float)d;
        d*=2*2;
        i++;
    }
    printf("%f\n", P);
    return 0;
}