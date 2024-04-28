#include <stdio.h>
#include <math.h>
int main(void)
{ 
    int n, i; float x, S;
    printf("Input the values of x and n: ");
    scanf("%f %d", &x, &n);
    S=0; i=0;
    while (i<=n)
    {
        S+=pow(fabs(2*x+i), i)/(float)((i+1)*(i+2));
        i++;
    }
    printf("%f\n", S);
    return 0;
}