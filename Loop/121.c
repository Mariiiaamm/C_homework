#include <stdio.h>
int main(void)
{ 
    int n, i; float x, d, S;
    printf("Input the values of x and n: ");
    scanf("%f %d", &x, &n);
    S=0; d=x; i=0;
    while (i<=n)
    {
        S+=d/(float)(4*i+1);
        d*=x*x*x*x;
        i++;
    }
    printf("%f\n", S);
    return 0;
}