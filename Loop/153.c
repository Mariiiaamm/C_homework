#include <stdio.h>
int main(void)
{
    int i, m; float n, P;
    printf("Input the value of n: ");
    scanf("%f", &n);
    P=1;
    for(i=0; i<=15; i++)
    {
        for(m=1; m<=6; m++) P*=i/(float)(i+n-m);
    } printf("%f\n", P);
    return 0;
}