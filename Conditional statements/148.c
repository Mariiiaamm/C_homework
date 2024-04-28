#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, Y; int k;
    printf("Input the value of x: ");
    scanf("%f", &x);
    for(k=2; k<=17; k++)
    { 
        if(x<6) Y=pow(x, k)+k; else Y=log(k)/(float)log(5);
        printf("%f\n", Y);
    }
    return 0;
}