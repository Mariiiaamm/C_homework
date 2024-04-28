#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, Y;
    x=-6.4;
    do 
    {
        Y=exp(1.0/tan(x));
        printf("%f %f\n", x, Y);
        x+=0.2;
    } while (x<=2.4);
    return 0;
}