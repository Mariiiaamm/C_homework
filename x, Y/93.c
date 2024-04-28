#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, Y;
    x=-4.8;
    do
    {
        Y=pow(atan(x+1), 2);
        printf("%f %f\n",x, Y);
        x+=0.2;
    } while (x<=5.2);
    return 0;
}