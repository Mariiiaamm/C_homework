#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, Y;
    x=-7.5;
    do
    {
        Y=log(x*x+4)/log(3);
        printf("%f %f\n", x, Y);
        x+=0.3;
    } while (x<=8.3);
    return 0;
}