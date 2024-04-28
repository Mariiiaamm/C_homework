#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, n; float x, y, S;
    printf("Input the value of n: ");
    scanf("%d", &n);
    S=0; x=1; y=1; i=0;
    while(i<=n-1)
    {
        S+=x*x+y;
        x=sin(x)+3;
        y=cos(y);
        i++;
    }
    printf("%f\n", S);
    return 0;
}