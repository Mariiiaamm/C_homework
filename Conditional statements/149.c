#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, Y; int k;
    printf("Input the value of x: ");
    scanf("%f", &x);
    for(k=1; k<=14; k++)
    { 
        if(x>2 && x<5) Y=7*(exp(k+3));
        else if(x>0 && x<=2) Y=8*x*pow(k, 5); else Y=7;
        printf("%f\n", Y);
    }
    return 0;
}