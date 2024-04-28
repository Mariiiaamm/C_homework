#include <stdio.h>
#include <math.h>
int main(void)
{
    int i; float x, y, P;
    printf("Input the values of x and y: ");
    scanf("%f %f", &x, &y);
    P=1; i=1;
    while(i<=17)
    {
        if(i%2==1) {x=sin(i)*sin(i); y=tan(i);} else {x=0; y=1/(float)tan(i);}
        P*=x*x*y;
        i++;
    }
    printf("%f\n", P);
    return 0;
}