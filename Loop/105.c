#include <stdio.h>
#include <math.h>
int main(void)
{
    int n, i; float S, x;
    printf("Input the value of n: ");
    scanf("%d", &n);
    S=0; x=1; i=0;
    while(i<=n)
    {
        S+=x*x-x;
        x=sin(2*x);
        i++;
    }
    printf("%f\n", S);
    return 0;
}