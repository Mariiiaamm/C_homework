#include <stdio.h>
#include <math.h>
int main(void)
{
    int a, i, n; float b, S;
    printf("Input the value of n: ");
    scanf("%d", &n);
    S=0; a=1; b=2; i=1;
    while(i<=n)
    {
        S+=a+b*b;
        a=6*a-4;
        b=5*(tan(b))+3;
        i++;
    }
    printf("%f\n", S);
    return 0;
}