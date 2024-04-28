#include <stdio.h>
int main(void)
{
    int n, i; float S, x;
    printf("Input the value of n: ");
    scanf("%d", &n);
    S=0; x=5; i=1;
    while(i<=n)
    {
        S+=x*x;
        x=x*x+7;
        i++;
    }
    printf("%f\n", S);
    return 0;
}