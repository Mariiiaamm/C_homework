#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, Y;
    x=10;
    while(x<=20)
    {
         if(x>12) Y=3*log(x)/log(3); else Y=x*x*x;
         printf("%f %f\n", x, Y);
         x+=2;
    }
    return 0;
}