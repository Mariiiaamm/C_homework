#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, n; float S, x, y, p;
    printf("Input the values of x and n: ");
    scanf("%f %d", &x, &n);
    S=1; y=1; p=cos(fabs(x)); i=1;
    while (i<=n)
    {
        y*=i;
        S*=(y/(float)(i+1)-p);
        p*=cos(fabs(x));
        i++;
    }
    printf("%f\n", S);
    return 0;
}