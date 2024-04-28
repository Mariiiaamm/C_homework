#include <stdio.h>
int main(void)
{
    int i, n, k; float V, Z, S;
    printf("Input the values of V and n: ");
    scanf("%f %f", &V, &n);
    Z=0;
    for(k=1; k<=n; k++)
    { 
        S=0;
        {
            for(i=1; i<=k; i++) S+=V*i+k;
        } Z+=(k+5)*S;
    } printf("%f\n", Z);
    return 0;
}