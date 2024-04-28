#include <stdio.h>
#include <math.h>
int main(void)
{
    int y, i, n; float x, S;
    printf("Input the value of n: ");
    scanf("%d", &n);
    S=0; x=3; y=3; i=1;
    while(i<=n-3)
    {
        S+=x*x+sin(y);
        x=x-y;
        y=y*y-6;
        i++;
    }
    printf("%f\n", S);
    return 0;
}