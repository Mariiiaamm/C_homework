#include <stdio.h>
#include <math.h>
int main(void)
{ 
    int n, i; float x, p, z, S;
    printf("Input the values of x and n: ");
    scanf("%f %d", &x, &n);
    S=0; p=1; z=fabs(x)*fabs(x); i=1;
    while (i<=n)
    { 
        p*=4;
        z*=fabs(x);
        S+=i/(float)(p+z);
        i++;
    }
    printf("%f\n", S);
    return 0;
}