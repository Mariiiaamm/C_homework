#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, Y;
    x=-30;
    do
    {
         if(x>5) Y=sin(x); else Y=cos(x);
         printf("%f %f\n", x, Y);
         x+=3.5;
    } while (x<=30);
    return 0;
}