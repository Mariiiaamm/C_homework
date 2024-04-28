#include <stdio.h>
int main(void)
{
    float x, Y;
    x=-3.8;
    while (x<=5.4)
    {
         Y=2*(x+4);
         printf("%f %f\n", x, Y);
         x+=0.3;
    }
    return 0;
}