#include <stdio.h>
#include <math.h>
int main(void)
{
    int n, i; float S, x;
    printf("Input the value of n: ");
    scanf("%d", &n);
    S=0; x=1; i=n;
    while(i<=2*n)
    {
        S+=x;
        x=3.4*(fabs(x-7));
        i++;
    }
    printf("%f\n", S);
    return 0;
}