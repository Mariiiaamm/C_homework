#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, Y; int k;
    printf("Input the value of x: ");
    scanf("%f", &x);
    for(k=1; k<=14; k++)
    { 
        if(x>3) Y=pow(x, (k-1)); 
        else if(x<1) Y=x*k*k*k; else Y=pow(10, -6);
        printf("%f\n", Y);
    }
    return 0;
}