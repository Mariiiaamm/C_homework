#include <stdio.h>
#include <math.h>
int main(void)
{ 
    int n, i; float x, p, q, S;
    printf("Input the values of x and n: ");
    scanf("%f %d", &x, &n);
    S=0; p=(x-1)/(float)(x*x+1); q=p*p; i=0;
    while (i<=n)
    {
        S+=p/(float)(2*i+1);
        p*=q;
        i++;
    }
    printf("%f\n", S);
    return 0;
}