#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, Y;
    x=-5;
    do
    {
         if(x>2) Y=pow(3, (x+4)); else Y=-8;
         printf("%f %f\n", x, Y);
         x+=2;
    } while (x<=8);
    return 0;
}