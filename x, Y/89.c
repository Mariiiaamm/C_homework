#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, Y;
    x=-4;
    while(x<=5)
    {
         if(x>1) Y=log(x)/log(4); else Y=-9;
         printf("%f %f\n", x, Y);
         x+=1;
    }
    return 0;
}