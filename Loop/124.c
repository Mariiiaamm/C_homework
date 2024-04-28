#include <stdio.h>
#include <math.h>
int main(void)
{ 
    int n, i; float x, q, P;
    printf("Input the values of x and n: ");
    scanf("%f %d", &x, &n);
    P=1; q=cos(fabs(x)); i=1;
    while (i<=n)
    {
        P*=(i*q)/(float)(i+1);
        q*=cos(fabs(x));
        i++;
    }
    printf("%f\n", P);
    return 0;
}