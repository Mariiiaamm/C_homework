#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, Y; int k;
    printf("Input the value of x: ");
    scanf("%f", &x);
    for(k=1; k<=15; k++)
    { 
        if(x<1) Y=8*pow(x, k); else Y=7*x+log(x)/(float)(log(3));
        printf("%f\n", Y);
    }
    return 0;
}