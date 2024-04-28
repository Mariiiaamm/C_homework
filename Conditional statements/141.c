#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, Y; int k;
    printf("Input the value of x: ");
    scanf("%f", &x);
    for(k=1; k<=14; k++)
    { 
        if(x>1) Y=3*pow(x, (k+1)); else Y=5*x+pow(k, 7);
        printf("%f\n", Y);
    }
    return 0;
}