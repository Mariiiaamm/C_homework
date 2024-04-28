#include <stdio.h>
#include <math.h>
int main(void)
{
    int k, j; float b, P; double S;
    printf("Input the value of b: ");
    scanf("%f", &b);
    S=1;
    for(k=1; k<=10; k++)
    { 
        P=0;
        {
            for(j=1; j<=8; j++) P*=tan(b*k+j*j);
        } S*=(k+1)*P;
    } printf("%Lf\n", S);
    return 0;
}