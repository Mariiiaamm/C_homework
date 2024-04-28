#include <stdio.h>
#include <math.h>
int main(void)
{
    int n, i; float P, x;
    printf("Input the value of n: ");
    scanf("%d", &n);
    P=1; x=0.5; i=5;
    while(i<=n)
    {
        P*=x*x+x;
        x=tan(x+2);
        i++;
    }
    printf("%f\n", P);
    return 0;
}