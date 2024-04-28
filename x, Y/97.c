#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, Y;
    x=10;
    do
    {
         if(x>7) Y=exp(sin(x)); else Y=0;
         printf("%f %f\n", x, Y);
         x+=3.2;
    } while (x<=23);
    return 0;
}