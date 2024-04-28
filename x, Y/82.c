#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, Y;
    x=-5.4;
    while (x<=1.2)
    {
        Y=cos(2*x)*2/(float)sin(2*x);
        printf("%f %f\n", x, Y);
        x+=0.4;
    }
    return 0;
}