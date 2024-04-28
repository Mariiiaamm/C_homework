#include <stdio.h>
#include <math.h>
int main(void)
{
    int n, i; float x, S;
    printf("Input the value of n: ");
    scanf("%d", &n);
    S=0; x=1; i=1;
    while(i<=n) 
    { 
        S+=x*x; 
        x=0.5*(fabs(x-4));
        i++;
    }  
    printf("%f\n", S);
    return 0;
}