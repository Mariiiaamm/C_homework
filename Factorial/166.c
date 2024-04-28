#include <stdio.h>
int main(void)
{
    int i, n; float S, z, q, x, y, p;
    printf("Input the values of x and n: ");
    scanf("%f %d", &x, &n);
    S=0; z=0; y=1; p=x; q=-1; i=1;
    while (i<=n)
    {
        y*=i;
        z+=(q*p)/(float)y;
        p*=x;
        q*=(-1);
        i++;
    }
    S+=z/(float)n;
    printf("%f\n", S);
    return 0;
}