#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, Y;
    x=-3.3;
    do
    {
        Y=fabs(2*x+x*x*x);
        printf("%f %f\n", x, Y);
        x+=0.3;
    } while (x<=2.7);
    return 0;
}