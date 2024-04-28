#include <stdio.h>
#include <math.h>
int main(void)
{ 
    int n, i; float x, q, S;
    printf("Input the value of x and n: ");
    scanf("%f %d", &x, &n);
    S=0; q=3*3; i=1;
    while (i<=n)
    {
        S+=sin(3*x+2*i+2)/(float)q;
        q*=3*3;
        i++;
    }
    printf("%f\n", S);
    return 0;
}