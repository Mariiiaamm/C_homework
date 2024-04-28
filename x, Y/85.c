#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, Y; const float PI=3.14159;
    x=-PI;
    while (x<=PI)
    {
        Y=sin(2*x)+cos(x);
        printf("%f %f\n", x, Y);
        x+=PI/(float)8;
    }
    return 0;
}