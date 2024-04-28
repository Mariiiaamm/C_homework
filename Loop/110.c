#include <stdio.h>
#include <math.h>
int main(void)
{
    int n, i; float P, x;
    printf("Input the value of n: ");
    scanf("%d", &n);
    P=1; x=1; i=0;
    while(i<=n)
    {
        P*=x;
        x=1/tan(x+1);
        i++;
    }
    printf("%f\n", P);
    return 0;
}