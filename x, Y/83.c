#include <stdio.h>
int main(void)
{
    float x, Y;
    x=7.5;
    while(x<=12.5)
    {
        Y=(x+1)*2;
        printf("%f %f\n", x, Y);
        x+=0.2;
    }
    return 0;
}