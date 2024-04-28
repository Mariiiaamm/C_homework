#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, Y;
    x=-5;
    while(x<=5)
    { 
         if(x>0) Y=x*x+4*pow(x, 8); else Y=0;
         printf("%f %f\n", x, Y);
         x+=2;
    }
    return 0;
}