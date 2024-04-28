#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, n; float S, x, y, p;
    printf("Input the values of x and n: ");
    scanf("%f %d", &x, &n);
    S=0; y=1; p=log(3)*x; i=1;
    while (i<=n)
    {
        y=y*i;
        S+=p/(float)y;
        p*=log(3)*x;
        i++;
    }
    printf("%f\n", S);
    return 0;
}