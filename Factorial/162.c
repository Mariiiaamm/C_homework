#include <stdio.h>
int main(void)
{
    int i, n; float S, x, y, p;
    printf("Input the values of x and n: ");
    scanf("%f %d", &x, &n);
    S=0; p=1; y=1; i=1;
    while (i<=n)
    {
        S+=p/(float)y;
        p*=x*x;
        y*=(2*i-1)*2*i;
        i++;
    }
    printf("%f\n", S);
    return 0;
}