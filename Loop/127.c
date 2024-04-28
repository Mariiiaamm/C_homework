#include <stdio.h>
#include <math.h>
int main(void)
{ 
    int n, i; float x, d, P;
    printf("Input the values of x and n: ");
    scanf("%f %d", &x, &n);
    P=1; d=log(x*x+3); i=1;
    while (i<=n)
    {
        P*=d/(float)((2*i+1)*i);
        d*=log(x*x+3);
        i++;
    }
    printf("%f\n", P);
    return 0;
}