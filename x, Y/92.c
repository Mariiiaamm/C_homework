#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, Y;
    x=-2.7;
    do 
    {
        Y=pow((x+x*x), 7);
        printf("%f %f\n", x, Y);
        x+=0.5;
    } while(x<=3.3);
    return 0;
}