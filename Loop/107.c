#include <stdio.h>
int main(void)
{
    int n, i; float P, x;
    printf("Input the value of n: ");
    scanf("%d", &n);
    P=1; x=1; i=0;
    while (i<=3*n)
    {
        P*=x;
        x=0.5*x+7;
        i++;
    }
    printf("%f\n", P);
    return 0;
}