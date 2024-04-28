#include <stdio.h>
int main(void)
{
    int x, i, n; float y, P;
    printf("Input the value of n: ");
    scanf("%d", &n);
    P=1; x=2; y=0.5; i=1;
    while(i<=n)
    {
        P*=x-y;
        x=(x+2)*2;
        y=y+6;
        i++;
    }
    printf("%f\n", P);
    return 0;
}