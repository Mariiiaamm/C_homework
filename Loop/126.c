#include <stdio.h>
#include <math.h>
int main(void)
{ 
    int n, i; float x, d, S;
    printf("Input the values of x and n: ");
    scanf("%f %d", &x, &n);
    S=0; d=(2*x+1)/(float)(log(x*x+1)); i=1;
    while (i<=n)
    {
        S+=d/(float)(i+5);
        d*=(2*x+1);
        i++;
    }
    printf("%f\n", S);
    return 0;
}