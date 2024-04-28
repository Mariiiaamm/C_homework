#include <stdio.h>
int main(void)
{
    int n, P, k;
    printf("Input the value of n: ");
    scanf("%d", &n);
    P=1; k=0;
    while (k<=n/2-1)
    {
        P*=(n-2*k);
        k++;
    }
    printf("%d\n", P);
    return 0;
}