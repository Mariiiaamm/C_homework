#include <stdio.h>
#include <math.h>
int main(void)
{ 
    int n, i; float x, p, q, S;
    printf("Input the values of x and n: ");
    scanf("%f %d", &x, &n);
    S=0; p=4; q=1; i=0;
    while (i<=n)
    {
        S+=(p*q)/(float)(i*i+2*i+3);
        p*=4;
        q*=(x+1);
        i++;
    }
    printf("%f\n", S);
    return 0;
}