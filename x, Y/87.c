#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, Y;
    x=-8;
    while(x<=8)
    {
         if(x>3) Y=x*x+4*pow(x, 8); else Y=0;
         printf("%f %f\n", x, Y);
         x+=3;
    }
    return 0;
}