#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, n; float S, x, y, z;
    printf("Input the values of x and n: ");
    scanf("%f %d", &x, &n);
    S=1; y=1; z=1; i=1;
    while (i<=n)
    {
        y*=2;
        z*=i;
        S*=((x+cos(i*x))/(float)(y*z));
        i++;
    }
    printf("%f\n", S);
    return 0;
}