#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, Y;
    x=-3;
    do
    {
         if(x>1) Y=6*(exp(8+x)); else Y=x+4;
         printf("%f %f\n", x, Y);
         x+=0.8;
    } while(x<=3);
    return 0;
}