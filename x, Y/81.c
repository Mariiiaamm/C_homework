#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, Y;
    x=2.4;
    while(x<=7.6)
    {
        Y=tan(2*x+x*x);
        printf("%f %f\n", x, Y);
        x+=0.2;
    }
    return 0;
}