#include <stdio.h>
int main(void)
{
    int k, n; float S, x, q, y, p;
    printf("Input the values of x and n: ");
    scanf("%f %d", &x, &n);
    S=1; q=-1; p=2*x+1; y=1; k=1;
    while (k<=n)
    {
        y*=k;
        S*=q/(float)(p*y);
        q*=(-1);
        p*=(2*x+1);
        k++;
    }
    printf("%f\n", S);
    return 0;
}