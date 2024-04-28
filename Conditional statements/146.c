#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, Y; int k;
    printf("Input the value of x: ");
    scanf("%f", &x);
    for(k=2; k<=18; k++)
    { 
        if(x>3 && x<7) Y=9*pow(x, k); else Y=8*x+k*k*k;
        printf("%f\n", Y);
    }
    return 0;
}