#include <stdio.h>
int main(void)
{
    int n, i; float S, x, y, z; 
    printf("Input the values of x and n: ");
    scanf("%f %d", &x, &n);
    S=0; y=x; z=1; i=1;
    while (i<=n)
    {
        S+=y/(float)z;
        y*=(-x*x);
        z*=2*i*(2*i+1);
        i++;
    }
    printf("%f\n", S);
    return 0;
}