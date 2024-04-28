#include <stdio.h>
int main(void)
{
    int n, i; float S, x;
    printf("Input the value of n: ");
    scanf("%d", &n);
    S=0; x=22; i=1;
    while(i<=n)
    {
        S+=x*x;
        x=x-3.4;
        i++;
    }
    printf("%f\n", S);
    return 0;
}