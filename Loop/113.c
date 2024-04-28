#include <stdio.h>
#include <math.h>
int main(void)
{
    int x, i, n; float y, P;
    printf("Input the value of n: ");
    scanf("%d", &n);
    P=1; x=2; y=1; i=4;
    while (i<=n)
    {
        P*=x*x+y;
        x=x*x-1;
        y=tan(y);
        i++;
    }
    printf("%f\n", P);
    return 0;
}