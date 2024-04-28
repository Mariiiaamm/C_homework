#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, Y; int k;
    printf("Input the value of x: ");
    scanf("%f", &x);
    for(k=1; k<=18; k++)
    { 
        if(x>=5) Y=pow(x, (k-1)); 
        else if(x>0) Y=x*k*k*k; else Y=pow(10, -6);
        printf("%f\n", Y);
    }
    return 0;
}