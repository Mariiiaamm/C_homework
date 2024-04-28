#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, j; float a, P; double S;
    printf("Input the value of f: ");
    scanf("%f", &a);
    S=0;
    for(i=1; i<=8; i++)
    { 
        P=1;
        {
            for(j=1; j<=8; j++) P*=cos(a*i+j);
        } S+=sin(i*i+1)*P;
    } printf("%Lf\n", S);
    return 0;
}