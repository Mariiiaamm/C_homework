#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, Y; int n, k;
    printf("Input the values of x and n: ");
    scanf("%f %f", &x, &n);
    for(k=1; k<=n; k++)
    { 
        if(x>5) Y=3*log(x)/(float)log(3); else Y=4*pow((x+k), 8);
        printf("%f\n", Y);
    }
    return 0;
}